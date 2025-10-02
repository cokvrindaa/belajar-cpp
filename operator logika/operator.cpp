#include <iostream>
using namespace std;

int main (){
    int a = 3;
    int b = 2;
    bool hasil;

    // NOT
    cout << "Operasi NOT \n";
    hasil = !(a == 3);
    cout << "Operator NOT: " << hasil << endl;

    // AND
    cout << "Operasi AND \n";
    hasil = (a == 3 && b == 2); 
    cout << "Operator AND, TRUE & TRUE : " << hasil << endl;
    hasil = (a == 2 && b == 2); 
    cout << "Operator AND, FALSE & TRUE : " << hasil << endl;
    hasil = (a == 10 && b == 10); 
    cout << "Operator AND, FALSE & FALSE : " << hasil << endl;

    // OR
    cout << "Operasi OR \n";
    hasil = (a == 3 || b == 2); 
    cout << "Operator OR, TRUE & TRUE : " << hasil << endl;
    hasil = (a == 2 || b == 2); 
    cout << "Operator OR, FALSE & TRUE : " << hasil << endl;
    hasil = (a == 10 || b == 10); 
    cout << "Operator OR, FALSE & FALSE : " << hasil << endl;


    return 0;
}