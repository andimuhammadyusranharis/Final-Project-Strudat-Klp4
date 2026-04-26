#ifndef GLOBAL_H
#define GLOBAL_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Struktur data tunggal untuk Paket
struct Paket {
    string resi;
    string pengirim;
    string tujuan;
    int berat; // dalam kg
    int prioritas; // 1-5
};

// Struktur Node untuk BST (Nabil)
struct NodeBST {
    Paket data;
    NodeBST *left, *right;
};

// Struktur Node untuk Linked List (Vera)
struct NodeLL {
    Paket data;
    NodeLL *next;
};

#endif