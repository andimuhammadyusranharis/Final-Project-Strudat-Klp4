#include "graph_route.h"

Graph* createGraph(int V) {
    Graph* graph = new Graph;
    graph->jumlahKota = V;//
    graph->head = new AdjNode*[V];//
    for (int i=0; i<V; i++) {
        graph->head[i]=nullptr;
    }
    return graph;
}

void tambahRute(Graph* graph, string asal, string tujuan, int jarak) {
    // cek 
    if (graph->indeksKota.size() >= graph->jumlahKota) {
    cout << "Jumlah kota melebihi kapasitas graph!" << endl;
    return;
    }

    if (graph->indeksKota.find(asal) == graph->indeksKota.end()) {
        int index = graph->indeksKota.size();
        graph->indeksKota[asal] = index;
    }//
    if (graph->indeksKota.find(tujuan) == graph->indeksKota.end()) {
        int index = graph->indeksKota.size();
        graph->indeksKota[tujuan] = index;
    }//

    int src = graph->indeksKota[asal];
    int dest = graph->indeksKota[tujuan];

    AdjNode* newNode = new AdjNode{tujuan, jarak, graph->head[src]};
    graph->head[src] = newNode;//
    AdjNode* newNode2 = new AdjNode{asal, jarak, graph->head[dest]};
    graph->head[dest] = newNode2;

}

void cetakRute(Graph* graph) {
    cout << "=== PETA RUTE LOGISTIK ===" << endl;

    for (auto const& kota : graph->indeksKota) {
        string namaKota = kota.first;
        int index = kota.second; //
        cout << "[HUB] " << namaKota << " -> ";//
        AdjNode* temp = graph->head[index];
        while (temp != nullptr) {
            cout << "(" << temp->kotaTujuan << ", " << temp->jarak << " km) ";
            temp = temp->next;
        }
        cout << endl;
    }
}

//LIST KOTA DAN KABUPATEN SULAWESI SELATAN (buat nanti ditaro di main.cpp bos)
//ctrl+/ 

//cout << "\nMenampilkan peta distribusi paket...\n";
// Graph* graph = createGraph(100);

 //// === JALUR BARAT (pesisir utama) ===
// tambahRute(graph, "Kota Makassar", "Kabupaten Maros", 33);
// tambahRute(graph, "Kabupaten Maros", "Kabupaten Pangkep", 20);
// tambahRute(graph, "Kabupaten Pangkep", "Kabupaten Barru", 49);
// tambahRute(graph, "Kabupaten Barru", "Kota Pare Pare", 64);
// tambahRute(graph, "Kota Pare Pare", "Kabupaten Pinrang", 28);

// // === JALUR TENGAH (naik ke utara) ===
// tambahRute(graph, "Kota Pare Pare", "Kabupaten Sidrap", 65);
// tambahRute(graph, "Kabupaten Sidrap", "Kabupaten Enrekang", 70); 
// tambahRute(graph, "Kabupaten Enrekang", "Kabupaten Tana Toraja", 43);
// tambahRute(graph, "Kabupaten Tana Toraja", "Kota Palopo", 95); 

// // === JALUR TIMUR ===
// tambahRute(graph, "Kabupaten Barru", "Kabupaten Soppeng", 65);
// tambahRute(graph, "Kabupaten Soppeng", "Kabupaten Bone", 68);
// tambahRute(graph, "Kabupaten Bone", "Kabupaten Wajo", 89);
// tambahRute(graph, "Kabupaten Bone", "Kota Palopo", 65);

// // === JALUR SELATAN ===
// tambahRute(graph, "Kota Makassar", "Kabupaten Gowa", 15);
// tambahRute(graph, "Kabupaten Gowa", "Kabupaten Takalar", 30);
// tambahRute(graph, "Kabupaten Takalar", "Kabupaten Jeneponto", 83);
// tambahRute(graph, "Kabupaten Jeneponto", "Kabupaten Bantaeng", 66);
// tambahRute(graph, "Kabupaten Bantaeng", "Kabupaten Bulukumba", 40);

// // === CABANG TAMBAHAN ===
// tambahRute(graph, "Kabupaten Bulukumba", "Kabupaten Sinjai", 55);
// tambahRute(graph, "Kabupaten Sinjai", "Kabupaten Bone", 60); 

//cetakRute(graph);