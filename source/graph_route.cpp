#include "graph_route.h"

Graph* createGraph(int V) {
    Graph* graph = new Graph;
    graph->jumlahKota = V;

    graph->head = new AdjNode*[V];

    for (int i=0; i<V; i++) {
        graph->head[i]=nullptr;
    }
    return graph;
}

void tambahRute(Graph* graph, string asal, string tujuan, int jarak) {
    // validasi kapasitas graph (agar tidak kelebihan)
    if (graph->indeksKota.size() >= graph->jumlahKota) {
    cout << "Jumlah kota melebihi kapasitas graph!" << endl;
    return;
    }

    // jika kota asal belum ada, tambahkan ke map indeks
    if (graph->indeksKota.find(asal) == graph->indeksKota.end()) {
        int index = graph->indeksKota.size();
        graph->indeksKota[asal] = index;
    }
    
    // jika kota tujuan belum ada, tambahkan ke map indeks
    if (graph->indeksKota.find(tujuan) == graph->indeksKota.end()) {
        int index = graph->indeksKota.size();
        graph->indeksKota[tujuan] = index;
    }

    int src = graph->indeksKota[asal];
    int dest = graph->indeksKota[tujuan];

    AdjNode* newNode = new AdjNode{tujuan, jarak, graph->head[src]};
    graph->head[src] = newNode;

    AdjNode* newNode2 = new AdjNode{asal, jarak, graph->head[dest]};
    graph->head[dest] = newNode2;

}

void cetakRute(Graph* graph) {
    //desc
    cout << "=== PETA RUTE LOGISTIK SULAWESI SELATAN ===" << endl;
    cout << "Menampilkan jalur distribusi antar kota/kabupaten" << endl << endl;

    //total wil
    cout << "Total Wilayah: " << graph->indeksKota.size() << endl;

    //hitung total rute
    int totalEdge = 0;
    for (auto const& kota : graph->indeksKota) {
        AdjNode* temp = graph->head[kota.second];
        while (temp != nullptr) {
            totalEdge++;
            temp = temp->next;
        }
    }
    cout << "Total Rute: " << totalEdge / 2 << endl; // bagi 2 karena dua arah

    cout << "========================================" << endl;

    //loop utama
    for (auto const& kota : graph->indeksKota) {
        string namaKota = kota.first;
        int index = kota.second;

        // label hub utama
        if (namaKota == "Kota Makassar") {
            cout << "[HUB UTAMA] ";
        } else {
            cout << "[HUB] ";
        }

        cout << namaKota << " -> ";

        AdjNode* temp = graph->head[index];

        // format output
        bool adaRute = false;

        while (temp != nullptr) {
            cout << "\n   -> " << temp->kotaTujuan << " (Jarak: " << temp->jarak << " km)";
            adaRute = true;
            temp = temp->next;
        }

        if (!adaRute) {
            cout << "(Tidak ada rute)";
        }

        cout << endl;
    }

    cout << "========================================" << endl;
}