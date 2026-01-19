#include <iostream>
using namespace std;
#include <cmath>

int main(){
  // Deklarasi
  float a,b, hasil;
  int angkaOperasi;
  string jenisOperasi;

  // Awalan
  cout << "Selamat datang di kalkulator sederhana!" << endl;
  cout << "Masukan angka pertama: ";
  cin >> a;
  cout << "Masukan angka ke dua: ";
  cin >> b;

  // Deskirpsi
  cout << "Masukan aritmatika dengan angka!: " << endl;
  cout << "Pertambahan (1)" << endl;
  cout << "Pengurangan (2)" << endl;
  cout << "Perkalian (3)" << endl;
  cout << "Pembagian (4)" << endl;

  // Pemilihan operasi
  cout << "Pilih : ";
  cin >> angkaOperasi;

  // Kondisi
  if(angkaOperasi == 1){
    hasil = a + b;
    jenisOperasi = " + ";
  } else if (angkaOperasi == 2){
    hasil = a - b;
    jenisOperasi = " - ";
  } else if (angkaOperasi == 3){
    hasil = a * b;
    jenisOperasi = " x ";
  } else if (angkaOperasi == 4){
      hasil = a / b ;
    jenisOperasi = " / ";
  }

  // Hasil
  if (std::isinf(hasil)){
    cout << "Tidak bisa di bagi 0";
  } else{
    cout << "Hasil operasi dari " << a << jenisOperasi << b << " = " << hasil << endl;
  }
}