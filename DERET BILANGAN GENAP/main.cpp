#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int total = 0;
    int jumlah_deret = 10;

    for (int y = 1; y <= jumlah_deret; y++) {
        int genap = y * 2;
        total += genap;
        cout <<genap;
        
        if (y < jumlah_deret) {
            cout << " + ";
        } else {
            cout << " = ";
        }
    }
    cout << total << endl;

    return 0;
}
