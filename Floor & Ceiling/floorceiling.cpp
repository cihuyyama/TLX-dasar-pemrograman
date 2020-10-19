#include <iostream>
using namespace std;

int main(){
	float a;
	int b;
	cin >> a;
	
	if (a>=0){
		b=(int)a;
		if ((float)a-(int)b==(float)0){
			cout << b << endl;
		}
		else {
			cout << b+1 << " " << b << endl;
		}
	}
}

