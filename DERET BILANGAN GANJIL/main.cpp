#include <iostream>
using namespace std;

int main() {
    int total = 0;
    int jumlah_deret = 10;

    for (int a = 1; a <= jumlah_deret; a++) {
        int ganjil = (a * 2) - 1;
        total += ganjil;
        cout << ganjil;

        if (a < jumlah_deret) {
            cout << " + ";
        } else {
            cout << " = ";
        }
    }

    cout << total << endl;

    return 0;
}
