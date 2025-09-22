#include <iostream>
using namespace std;

int main(){
    int angka1, angka2, operasi;
    string nama;
    cout << "Masukan nama mu terlebih dahulu";
    cin >> nama;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    cout << "pilihlah hasil operasi bedasarkan \n";
    cout << "1. penjumlahan \n";
    cout << "2. pengurangan \n";
    cout << "3. perkalian \n";
    cout << "4. pembagian \n";
    cin >> operasi;

    if(operasi == 1){
        int hasil = angka1 + angka2;
        cout << "Hasil penjumlahan adalah: "<< hasil << " bos " << nama ;
    }
    else if (operasi == 2) {
        int hasil = angka1 - angka2;
        cout << "Hasil pengurangan adalah: "<<hasil;
    }
    else if (operasi == 3) {
        int hasil = angka1 * angka2;
        cout << "hasil perkalian adalah " <<hasil;
    }
    else if (operasi == 4){
        int hasil = angka1 / angka2;
        cout << "hasil pembagian adalah " <<hasil;
    }
    
}