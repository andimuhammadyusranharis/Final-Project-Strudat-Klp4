#include "global.h"
#include "bst_logic.h"
#include "linked_list.h"
#include "graph_route.h"
#include "sort_search.h"

int main() {
    NodeBST* databaseResi = nullptr;
    NodeLL* antreanPaket = nullptr;
    
    //LIST KOTA DAN KABUPATEN SULAWESI SELATAN
    Graph* graph = createGraph(100);
    // HUB UTAMA: Kota Makassar
    tambahRute(graph, "Kota Makassar", "Kabupaten Gowa", 15);
    tambahRute(graph, "Kota Makassar", "Kabupaten Takalar", 36);
    tambahRute(graph, "Kota Makassar", "Kabupaten Maros", 33);
    tambahRute(graph, "Kota Makassar", "Kabupaten Pangkep", 49);
    // KABUPATEN GOWA
    tambahRute(graph, "Kabupaten Gowa", "Kabupaten Takalar", 30);
    tambahRute(graph, "Kabupaten Gowa", "Kabupaten Jeneponto", 86);
    tambahRute(graph, "Kabupaten Gowa", "Kabupaten Bantaeng", 136);
    // KABUPATEN TAKALAR
    tambahRute(graph, "Kabupaten Takalar", "Kabupaten Jeneponto", 83);
    // KABUPATEN MAROS
    tambahRute(graph, "Kabupaten Maros", "Kabupaten Pangkep", 20);
    tambahRute(graph, "Kabupaten Maros", "Kabupaten Barru", 65);
    // KABUPATEN PANGKEP
    tambahRute(graph, "Kabupaten Pangkep", "Kabupaten Barru", 49);
    // KABUPATEN BARRU
    tambahRute(graph, "Kabupaten Barru", "Kota Pare Pare", 64);
    tambahRute(graph, "Kabupaten Barru", "Kabupaten Soppeng", 65);
    // KOTA PARE PARE
    tambahRute(graph, "Kota Pare Pare", "Kabupaten Pinrang", 28);
    tambahRute(graph, "Kota Pare Pare", "Kabupaten Sidrap", 65);
    // KABUPATEN PINRANG
    tambahRute(graph, "Kabupaten Pinrang", "Kabupaten Enrekang", 43);
    // KABUPATEN ENREKANG
    tambahRute(graph, "Kabupaten Enrekang", "Kabupaten Tana Toraja", 43);
    // KABUPATEN SIDRAP
    tambahRute(graph, "Kabupaten Sidrap", "Kabupaten Soppeng", 87);
    // KABUPATEN SOPPENG
    tambahRute(graph, "Kabupaten Soppeng", "Kabupaten Bone", 68);
    // KABUPATEN BONE
    tambahRute(graph, "Kabupaten Bone", "Kabupaten Wajo", 89);
    // KABUPATEN WAJO
    tambahRute(graph, "Kabupaten Wajo", "Kabupaten Luwu", 137); 
    // TAMBAHAN LUWU
    tambahRute(graph, "Kabupaten Luwu", "Kota Palopo", 47);
    tambahRute(graph, "Kabupaten Luwu", "Kabupaten Luwu Utara", 203); 
    tambahRute(graph, "Kabupaten Luwu", "Kabupaten Luwu Timur", 225); 
    // TORAJA TAMBAHAN
    tambahRute(graph, "Kabupaten Tana Toraja", "Kabupaten Toraja Utara", 56); 
    // KABUPATEN BULUKUMBA
    tambahRute(graph, "Kabupaten Bulukumba", "Kabupaten Bantaeng", 40);
    tambahRute(graph, "Kabupaten Bulukumba", "Kabupaten Sinjai", 55);
    // TAMBAHAN SINJAI
    tambahRute(graph, "Kabupaten Sinjai", "Kabupaten Bone", 65); 
    // KABUPATEN BANTAENG
    tambahRute(graph, "Kabupaten Bantaeng", "Kabupaten Jeneponto", 66);

    int pilihan;
    do {
        cout << "\n=== SISTEM EKSPEDISI LOGISTIK KLP 4 ===\n";
        cout << "1. Input Paket Baru\n";
        cout << "2. Proses Paket\n";
        cout << "3. Tampilkan Antrean\n";
        cout << "4. Cari Resi\n";
        cout << "5. Lihat Rute\n";
        cout << "6. Laporan Sorting\n";
        cout << "0. Keluar\n";
        cout << "Pilih: "; cin >> pilihan;

        switch(pilihan) {
            case 1: 
                // Fungsi Vera
                break;
            case 2:
                // Panggil fungsi Nabil & Ilham
                break;
            case 3:
                // Tampilkan antrean paket (fungsi Vera)
                break;
            case 4:
                // string cari;
                //     cout << "Masukkan Resi: "; cin >> cari;
    
                //     // BST Search
                //     NodeBST* hasilBST = searchBST(databaseResi, cari);
    
                //     if (hasilBST != nullptr) {
                //         cout << "[BST] Data ditemukan:\n";
                //         cout << "   Pengirim: " << hasilBST->data.pengirim << endl;
                //         cout << "   Tujuan: " << hasilBST->data.tujuan << endl;
                //     } else {
                //         cout << "[BST] Data tidak ditemukan\n";
                //     }
                // break;
            case 5:
                cetakRute(graph);
                break;
            case 6:
                // Fungsi sorting & searching (Nabil & Ilham)
                break;
        }
    } while (pilihan != 0);

    return 0;
}