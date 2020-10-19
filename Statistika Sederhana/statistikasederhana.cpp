#include <iostream>
using namespace std;

int main() {
	int n, i, angka, maksim, minim;
	int arr[n];
	cin >> n;
	for(i=1; i<=n; i++){
		cin >> arr[i];
		if ( i == 1 ) {
            minim = arr[i];
            maksim = arr[i];
        } 
        else if ( minim > arr[i] ) {
            minim = arr[i];
        }
        else if ( maksim < arr[i]) {
            maksim = arr[i];
        }
	}
	cout << maksim << " " << minim << endl;
}
