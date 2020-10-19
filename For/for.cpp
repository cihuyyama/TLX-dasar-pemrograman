#include <iostream> 
using namespace std;

int main() {
	int n=0, i, jbil, bil;
	cin >> jbil;
	for (i=0; i<jbil; i++){
		cin >> bil;
		n=n+bil;
	}
	cout << n << endl;
}
