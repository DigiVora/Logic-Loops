#include <iostream>
using namespace std;

int main () {
	for ( int b = 1; b <= 5; b++) {
		long long bK = 1;
		for ( int c= 1; c <= b; c++) {
			int bil = (c * 2) - 1;
			bK *= bil;
			cout << bil;
			if (c < b) cout << " * ";
		}
		cout << " = " << bK << endl;
	}
	cout << endl;
	
	return 0;
}
