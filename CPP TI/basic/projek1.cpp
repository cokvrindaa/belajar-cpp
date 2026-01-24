#include <iostream>
using namespace std;

int main() {
    int jumlahSiswa;

    // Perulangan untuk mengecek apakah jumlah siswa positif? jika tidak bakal ulang terus sampai pengguna menginput positif
    do {
        cout << "Masukkan jumlah siswa: ";
        cin >> jumlahSiswa;
        if (jumlahSiswa <= 0) {
            cout << "Jumlah siswa harus bilangan positif!\n";
        }
    } while (jumlahSiswa <= 0);
    
    // Inisalisasi variabel
    double nilaiSiswa, totalNilaiSiswa = 0;
    double nilaiTertinggi = 0;
    double nilaiTerendah = 0;

    int jumlahLulus = 0;
    int jumlahTidakLulus = 0;
    int jumlahGradeSangatBaik= 0, jumlahGradeBaik = 0, jumlahGradeCukup = 0, jumlahGradeKurang = 0;
    int frekuensi[101] = {0};
    
    // Melakukan perulangan bedasarkan input nilai siswa 
    for (int i = 1; i <= jumlahSiswa; i++) {
        cout << "\nSiswa ke-" << i << endl;
        
        // Menginput nilai siswa
        do {
            cout << "Nilai siswa (0-100): ";
            cin >> nilaiSiswa;
        } while (nilaiSiswa < 0 || nilaiSiswa > 100);
        
        // Menambahkan totalNilai siswa dari nilai per masing siswa
        totalNilaiSiswa += nilaiSiswa; 

        // Menentukan nilai akhir tertinggi dan terendah
        if (i == 1) {
            nilaiTertinggi = nilaiSiswa;
            nilaiTerendah = nilaiSiswa;
        } else {
            if (nilaiSiswa > nilaiTertinggi){
                nilaiTertinggi = nilaiSiswa;
            }
            if (nilaiSiswa < nilaiTerendah){
                nilaiTerendah = nilaiSiswa;
            }
        }
        
        string grade;
        string status;
        
        // Menentukan Grade sesuai nilai
        if (nilaiSiswa >= 85) {
            grade = "Sangat baik";
            status = "LULUS";
            jumlahGradeSangatBaik++;
            jumlahLulus++;
        }
        else if (nilaiSiswa >= 70) {
            grade = "Baik";
            status = "LULUS";
            jumlahGradeBaik++;
            jumlahLulus++;
        }
        else if (nilaiSiswa >= 55) {
            grade = "Cukup";
            status = "LULUS";
            jumlahGradeCukup++;
            jumlahLulus++;
        }
        else {
            grade = "Kurang";
            status = "TIDAK LULUS";
            jumlahGradeKurang++;
            jumlahTidakLulus++;
        }

        // Menampilkan nilai akhir, grade, status per siswa
        cout << "Nilai Siswa : " << nilaiSiswa << endl;
        cout << "Grade       : " << grade << endl;
        cout << "Status      : " << status << endl;
    }

     
    // Mencari nilai modus bedasarkan nilai akhir
    int modus = 0;
    int frekTerbesar = frekuensi[0];
        
    for (int i = 1; i <= 100; i++){
        if (frekuensi[i] > frekTerbesar){
            frekTerbesar = frekuensi[i];
            modus = i;
        }
    }
    
    // Rata rata nilai 
    double rataRata = totalNilaiSiswa / jumlahSiswa;
    // Menghitung persentase kelulusan
    double presentaseLulus = jumlahLulus * 100.0/ jumlahSiswa;
   
    // Mengecek grade yang paling sering muncul
    string gradeTerbanyak = "Sangat Baik";
    int terbanyak = jumlahGradeSangatBaik;

    if (jumlahGradeBaik > terbanyak) {
        terbanyak = jumlahGradeBaik;
        gradeTerbanyak = "Baik";
    }
    if (jumlahGradeCukup > terbanyak) {
        terbanyak = jumlahGradeBaik;
        gradeTerbanyak = "Cukup";
    }
    if (jumlahGradeKurang > terbanyak) {
        gradeTerbanyak = "Kurang";
    }

    // Menampilkan semua rekaputulasi nilai...
    cout << "\n=== Rekapitulasi Nilai ===" << endl;
    cout << "Rata-rata Nilai Akhir: " << rataRata << endl;
    cout << "Jumlah siswa: " << jumlahSiswa << " siswa" << endl;
    cout << "Jumlah Siswa Lulus: " << jumlahLulus << " siswa" << endl;
    cout << "Jumlah Siswa Tidak Lulus: " << jumlahTidakLulus << " siswa" <<endl;
    cout << "Presentase Kelulusan: " << presentaseLulus << "%" << "\n" << endl;
    
    cout << "Grade Terbanyak: " << gradeTerbanyak << endl;
    cout << "Nilai Akhir Tertinggi: " << nilaiTertinggi << endl;
    cout << "Nilai Akhir Terendah: " << nilaiTerendah << endl;
    cout << "Modus Nilai Akhir: " << modus << endl;
    return 0;
}