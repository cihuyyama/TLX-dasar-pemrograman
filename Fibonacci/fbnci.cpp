#include <iostream>
using namespace std;

int main(){
	int n, m, satu=0, dua=1, temp;
	cin >> m;
	for (int i=0; i<m; i++){
	cin >> n;
}
	for(int i=0; i<n; i++){
		if(n>1){
			temp=satu+dua;
			satu=dua;
			dua=temp;
		}
		else {
			temp=1;
		}
	}
		cout << temp << endl;
}
