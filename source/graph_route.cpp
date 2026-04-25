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
    // KODE AKAN DIKERJAKAN OLEH RIFYAH
    if (graph->indeksKota.find(asal) == graph->indeksKota.end()){
        int index = graph->indeksKota.size();
        graph->indeksKota[asal]=index;
    }

    if(graph->indeksKota.find(tujuan)==graph->indeksKota.end()){
        int index = graph->indeksKota.size();
        graph->indeksKota[tujuan] = index;

    }
    
}

void cetakRute(Graph* graph) {
    // KODE AKAN DIKERJAKAN OLEH RIFYAH
}