#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float n, x, y;
	cin >> x >> y;
	n = x * y / 2;
	cout << fixed;
	cout << setprecision(2) << n << endl;
}
