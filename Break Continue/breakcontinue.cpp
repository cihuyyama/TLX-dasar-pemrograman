#include <iostream>
using namespace std;

int main(){
	int n;
	string error="ERROR";
	cin >> n;
	
	for (int i=1; i<=n; i++){
		if (i>42){
			break;
		}
		else if(i<1){
			break;
		}
		if (i==42){
			cout << error << endl;
		}
		else if (i%10!=0){
			cout << i << endl;
		}
	}
}
