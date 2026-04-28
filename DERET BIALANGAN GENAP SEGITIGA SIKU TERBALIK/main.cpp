#include <iostream>
using namespace std;

int main (){
	int tA =0;
	for (int f=5; f>= 1; f--){
		int bS = 0;
		for (int g =f; g>= 1; g--){
			int bil = g * 2;
			bS += bil;
			cout << bil;
			if (g > 1) cout << " + ";
		}
		tA += bS;
		cout << " = " << bS << endl;
	}
	cout << "---- + " << endl;
	cout << tA << endl;
	
	return 0;
}
