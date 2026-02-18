#include <iostream>
using namespace std;

int main(){
    int metodePembayaran;
    cout << "1. Cash" << endl << "2. Transfer" << endl << "3. Qriss" << endl;
    cout << "Silahkan masukan metode pembayaran anda: " ;
    cin >> metodePembayaran;
    switch (metodePembayaran){
        case 1:
            cout << "Cash";
            break;
        case 2:
            cout << "Transfer";
            break;
        case 3:
            cout << "Qriss";
            break;
        default:
            cout << "Kode pembayaran tidak tersedia";
    }
}