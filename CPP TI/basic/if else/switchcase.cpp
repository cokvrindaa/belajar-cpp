#include <iostream>
using namespace std;

int main() {
    int kode;

    cout << "Program Penentuan Lokasi Parkir Sekolah\n";
    cout << "Masukkan kode parkir (1-4): ";
    cin >> kode;

    switch(kode){
        case 1:
            cout << "Lokasi: Parkir Siswa";
            break;
        case 2:
            cout << "Lokasi: Parkir Guru";
            break;
        case 3:
            cout << "Lokasi: Parkir Tamu";
            break;
        case 4:
            cout << "Lokasi: Parkir Motor Listrik";
            break;
        default:
            cout << "Kode parkir tidak tersedia";
    }

    return 0;
}