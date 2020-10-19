#include <iostream>
using namespace std;

int main() {
	int x1, x2, y1, y2, sx, sy;
	cin >> x1 >> y1 >> x2 >> y2;
	
	if (x1-x2==0){
		sx = 0;
	}
	else if (x1>x2){
		sx = x1-x2;
	}
	else {
		sx = x2-x1;
	}
	
	if (y1-y2==0){
		sy = 0;
	}
	else if (y1>y2){
		sy = y1-y2;
	}
	else {
		sy = y2-y1;
	}
	
	cout << sy+sx << endl;
}
