#include "global.h"
#include "bst_logic.h"
#include "linked_list.h"
#include "graph_route.h"
#include "sort_search.h"

int main() {
    NodeBST* databaseResi = nullptr;
    NodeLL* antreanPaket = nullptr;

     Paket dataPaket[100];
    int jumlahPaket = 0;

    Graph* graph = createGraph(5);
    
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
            case 1: {
                Paket p;
                cout << "Masukkan Resi: "; cin >> p.resi;
                cout << "Nama Pengirim: "; cin >> p.pengirim;
                cout << "Tujuan: "; cin >> p.tujuan;
                cout << "Berat (kg): "; cin >> p.berat;
                cout << "Prioritas (1-5): "; cin >> p.prioritas;

                // Masuk ke Linked List
                tambahPaket(antreanPaket, p);

                // Masuk ke BST
                databaseResi = insertBST(databaseResi, p);

                // Simpan ke array
                dataPaket[jumlahPaket++] = p;

                break;
            }

            case 2:
                // Panggil fungsi Nabil & Ilham
                break;
            // dst...
        }
    } while (pilihan != 0);

    return 0;
}