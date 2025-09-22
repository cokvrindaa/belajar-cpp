#include <iostream>
using namespace std;
int main(){
    int a = 2;
    int b = 2;

    bool hasil1, hasil2;

    // komperasi, relation exparession.

    // sebanding
    hasil1 = (a == b);
    cout << hasil1 << endl;

    // tidak sebanding
    hasil2 = (a != b);
    cout << hasil2 << endl;

    // Kurang dari dan Lebih dari.
    hasil1 = (a < b);
    hasil2 = (a > b);
    cout << "Apakah a < b?" << " " << hasil1 <<endl;
    cout << "Apakah a > b?" << " " << hasil2 <<endl;

    // Kuarang dari dan Lebih dari sama dengan.
    hasil1 = (a <= b);
    hasil2 = (a >= b);
    cout << "Apakah a <= b?" << " " << hasil1 <<endl;
    cout << "Apakah a >= b?" << " " << hasil2;

    return 0;
}