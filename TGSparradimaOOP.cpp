#include <iostream>
using namespace std;

class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void tampilData() {
        cout << "==============================" << endl;
        cout << "Nama Barang       : " << nama << endl;
        cout << "Jumlah            : " << jumlah << endl;
        cout << "Kategori          : " << kategori << endl;
        cout << "Tanggal Produksi  : " << tanggalProduksi << endl;
        cout << "==============================" << endl;
    }
};

int main() {
    // Object 1: Elektronik
    Barang elektronik;
    elektronik.nama = "Laptop";
    elektronik.jumlah = 5;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "10-01-2024";

    // Object 2: Non Elektronik
    Barang nonElektronik;
    nonElektronik.nama = "Buku Tulis";
    nonElektronik.jumlah = 20;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "05-12-2023";

    // Menampilkan data
    elektronik.tampilData();
    nonElektronik.tampilData();

    return 0;
}