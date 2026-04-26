#ifndef GRAPH_ROUTE_H
#define GRAPH_ROUTE_H
#include "global.h"

struct AdjNode {
    string kotaTujuan;
    int jarak;
    AdjNode* next;
};

struct Graph {
    int jumlahKota;
    AdjNode** head;
};

// Inisialisasi graph
Graph* createGraph(int V);

// Menambahkan rute (edge) antar kota
void tambahRute(Graph* graph, string asal, string tujuan, int jarak);

// Menampilkan peta rute ekspedisi
void cetakRute(Graph* graph);

#endif