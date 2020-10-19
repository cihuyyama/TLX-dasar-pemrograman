#include <iostream>

using namespace std;

int main() {
	int min, jumlah, i = 1, lokasi;
	cin >> jumlah;
	
	int array[jumlah];
	
	cout << jumlah << "\n";
	for (i = 0; i < jumlah; i++) {
		cout << (i+1);
		cin >> array[i];
	}
	
	min = array[0];
	
	for(i = 0; i < jumlah; i++) {
		if (array[i] < min) {
			min = array[i];
			lokasi = i+1;
		}
	}
	
	cout << min << endl;
}
