#include <iostream>
using namespace std;

int main() {
	int n, jumlah, maksimum;
	cin >> n >> jumlah;
	
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[n];
		for(int i=0;i<n;i++){
			if(arr[n]++<jumlah)
			jumlah = arr[n];
		}
	}
	cout << maksimum<<endl;
}
