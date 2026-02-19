#include <iostream>
using namespace std;

int main(){
    int metodePembayaran;

    cout << "1. Cash" << endl << "2. Transfer" << endl << "3. Qriss" << endl;
    cout << "Silahkan masukan metode pembayaran anda: " ;
    cin >> metodePembayaran;
    switch (metodePembayaran){
        case 1:
            cout << "Anda memilih Cash!";
            break;
        case 2:
            cout << "Anda memilih Transfer!";
            break;
        case 3:
            cout << "Anda memilih Qriss!";
            break;
        default:
            cout << "Kode pembayaran invalid, pilih sesuai nomor yang disediakan";
    }
    return 0;
}