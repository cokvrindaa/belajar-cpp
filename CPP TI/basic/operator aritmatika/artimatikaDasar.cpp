#include <iostream>
using namespace std;

int main(){
  float a, b, hasil;
  // Pertamabahan
  cout << "masukan angka pertama: ";
  cin >> a;
  cout << "angka ke dua: ";
  cin >> b;


  hasil = a + b;
  cout << "Hasil dari " << a << " + " << b << " = " << hasil << endl;

  hasil = a - b;
  cout << "Hasl dari " << a << " - "  << b << " = " << hasil << endl;
 
  hasil = a * b;
  cout << "Hasl dari " << a << " x "  << b << " = " << hasil << endl;

  
  hasil = a / b;
  cout << "Hasl dari " << a << " / "  << b << " = " << hasil << endl;
  

  int data1, data2;
  cout << "masukan angka pertama (modulus): ";
  cin >> data1;
  cout << "angka ke dua (modulus): ";
  cin >> data2;

  hasil = data1 % data2;
  cout << "Hasl dari " << a << " % "  << b << " = " << hasil << endl;


}