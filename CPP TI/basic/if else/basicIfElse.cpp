#include <iostream>
using namespace std;

int main (){
  int nilai = 90;
  if (nilai >= 90){
    cout << "nilai sangat bagus";
  } else if (nilai >= 80){
    cout << "nilai bagus";
  } else if (nilai >= 70){
    cout << "nilai standar";
  } else if (nilai >= 60){
    cout << "nilai kurang";
  } else{
    cout << "nilai jelek";
  }
}