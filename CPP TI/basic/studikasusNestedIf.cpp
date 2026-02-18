#include <iostream>
using namespace std;

int main(){
    char lampuMerah;
    cout << "Anda melihat lampu merah? y/n " << endl;
    cin >> lampuMerah;

    if (lampuMerah == 'y'){
        char lihatPolisi;
        cout << "Anda melihat ada polisi? y/n" << endl;
        cin >> lihatPolisi;
        if(lihatPolisi == 'y') {
            cout << "Harus Berhenti!";
        } else {
            cout << "Tetap Berhenti";
        }
    } else {
        cout << "Silahkan jalan dan berhati hati!";
    }
}