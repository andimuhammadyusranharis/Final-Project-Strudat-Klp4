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