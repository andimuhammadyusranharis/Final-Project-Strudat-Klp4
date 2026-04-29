#include "global.h"
#include "bst_logic.h"
#include "linked_list.h"
#include "graph_route.h"
#include "sort_search.h"

int main() {
    NodeBST* databaseResi = nullptr;
    NodeLL* antreanPaket = nullptr;

    int pilihan;
    do {
        cout << "=== SISTEM EKSPEDISI LOGISTIK KLP 4 ===\n";
        cout << "1. Input Paket Baru (Linked List)\n";
        cout << "2. Cari Resi (BST & Binary Search)\n";
        cout << "3. Lihat Rute (Graph)\n";
        cout << "4. Laporan Terurut (Sorting)\n";
        cout << "0. Keluar\n";
        cout << "Pilih: "; cin >> pilihan;

        switch(pilihan) {
            case 1: 
                // Fungsi Vera
                break;
            case 2:
                // Panggil fungsi Nabil & Ilham
                break;
            // dst...
        }
    } while (pilihan != 0);

    return 0;
}
