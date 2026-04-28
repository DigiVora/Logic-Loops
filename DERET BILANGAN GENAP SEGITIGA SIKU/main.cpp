#include <iostream>
using namespace std;

int main() {
    for (int d = 1; d <= 5; d++) {
        int bS = 0;
        
        for (int e = 1; e <= d; e++) {
            int bil = e * 2;
            bS += bil;
            cout << bil;
            
            if (e < d) {
                cout << " + ";
            }
        }
        cout << " = " << bS << endl; 
    }

    return 0;
}
