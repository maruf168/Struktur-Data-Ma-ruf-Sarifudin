#include <iostream>
#include <string>

int main() {
    std::string nama;
    double angka1, angka2;

    // Input data dari pengguna
    std::cout << "Masukkan nama Anda: ";
    std::getline(std::cin, nama);

    std::cout << "Masukkan angka pertama: ";
    std::cin >> angka1;

    std::cout << "Masukkan angka kedua: ";
    std::cin >> angka2;

    // Perhitungan aritmatika sederhana
    double jumlah = angka1 + angka2;
    double perkalian = angka1 * angka2;

    // Menampilkan hasil ke layar
    std::cout << "\nHalo, " << nama << "!\n";
    std::cout << "Hasil penjumlahan " << angka1 << " + " << angka2 << " = " << jumlah << "\n";
    std::cout << "Hasil perkalian   " << angka1 << " * " << angka2 << " = " << perkalian << "\n";

    return 0;
}
