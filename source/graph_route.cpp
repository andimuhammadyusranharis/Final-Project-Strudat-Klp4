#include "graph_route.h"

Graph* createGraph(int V) {
    // KODE AKAN DIKERJAKAN OLEH RIFYAH
    //syap
    Graph* graph = new Graph;
    graph->jumlahKota = V;

    graph->head = new AdjNode*[V];

    for (int i=0; i<V; i++) {
        graph->head[i]=nullptr;
    }

    return graph;
}

void tambahRute(Graph* graph, string asal, string tujuan, int jarak) {
    if (graph->indeksKota.find(asal) == graph->indeksKota.end()) {
        int index = graph->indeksKota.size();
        graph->indeksKota[asal] = index;
    }

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
    // KODE AKAN DIKERJAKAN OLEH RIFYAH
}

//LIST KOTA DAN KABUPATEN SULAWESI SELATAN
//buat nanti ditaro di main.cpp bos

    // // HUB UTAMA: Kota Makassar
    // tambahRute(graph, "Kota Makassar", "Kabupaten Gowa", 15);
    // tambahRute(graph, "Kota Makassar", "Kabupaten Takalar", 36);
    // tambahRute(graph, "Kota Makassar", "Kabupaten Maros", 33);
    // tambahRute(graph, "Kota Makassar", "Kabupaten Pangkep", 49);

    // // KABUPATEN GOWA
    // tambahRute(graph, "Kabupaten Gowa", "Kabupaten Takalar", 30);
    // tambahRute(graph, "Kabupaten Gowa", "Kabupaten Jeneponto", 86);
    // tambahRute(graph, "Kabupaten Gowa", "Kabupaten Bantaeng", 136);

    // // KABUPATEN TAKALAR
    // tambahRute(graph, "Kabupaten Takalar", "Kabupaten Jeneponto", 83);

    // // KABUPATEN MAROS
    // tambahRute(graph, "Kabupaten Maros", "Kabupaten Pangkep", 20);
    // tambahRute(graph, "Kabupaten Maros", "Kabupaten Barru", 65);

    // // KABUPATEN PANGKEP
    // tambahRute(graph, "Kabupaten Pangkep", "Kabupaten Barru", 49);

    // // KABUPATEN BARRU
    // tambahRute(graph, "Kabupaten Barru", "Kota Pare Pare", 64);
    // tambahRute(graph, "Kabupaten Barru", "Kabupaten Soppeng", 65);

    // // KOTA PARE PARE (hub utara)
    // tambahRute(graph, "Kota Pare Pare", "Kabupaten Pinrang", 28);
    // tambahRute(graph, "Kota Pare Pare", "Kabupaten Sidrap", 65);

    // // KABUPATEN PINRANG
    // tambahRute(graph, "Kabupaten Pinrang", "Kabupaten Enrekang", 43);

    // // KABUPATEN ENREKANG
    // tambahRute(graph, "Kabupaten Enrekang", "Kabupaten Tana Toraja", 43);

    // // KABUPATEN SIDRAP
    // tambahRute(graph, "Kabupaten Sidrap", "Kabupaten Soppeng", 87);

    // // KABUPATEN SOPPENG
    // tambahRute(graph, "Kabupaten Soppeng", "Kabupaten Bone", 68);

    // // KABUPATEN BONE
    // tambahRute(graph, "Kabupaten Bone", "Kabupaten Wajo", 89);
    // tambahRute(graph, "Kabupaten Bone", "Kota Palopo", 65);

    // // KOTA PALOPO (timur Sulsel)
    // tambahRute(graph, "Kota Palopo", "Kabupaten Luwu", 47);

    // // KABUPATEN BULUKUMBA (selatan)
    // tambahRute(graph, "Kabupaten Bulukumba", "Kabupaten Bantaeng", 40);
    // tambahRute(graph, "Kabupaten Bulukumba", "Kabupaten Sinjai", 55);

    // // KABUPATEN BANTAENG
    // tambahRute(graph, "Kabupaten Bantaeng", "Kabupaten Jeneponto", 66);