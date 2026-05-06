<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 127675da0816cf7017b3e8615281955b4ef6d029
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

=======
#include <iostream>
using namespace std;
//program menghitung luas dan keliling lingkaran
//rumus luas = phi * r * r

int main() {
    float r, luas, keliling;
    const float phi = 3.14;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;

    luas = phi * r * r;
    keliling = 2 * phi * r;

    cout << "Luas lingkaran: " << luas << endl;
    cout << "Keliling lingkaran: " << keliling << endl;

    return 0;
}
>>>>>>> 2a5152e9abe9d8c5789067ac8fc2459aeb442247
