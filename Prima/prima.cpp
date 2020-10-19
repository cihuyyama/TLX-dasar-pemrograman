#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, i;
	bool cek;
	int p;
	cin >> p;
	for (int x=0; x<p; x++){
		cin >> n;
		for(i=1; i<=n; i++){
			cek=true;
			if (n>1){
				for (i=2; i<=sqrt(n); i++){
					if (n%i==0){
						cek=false;
					}
				}
			}
			else cek=false;
			(cek==true)? cout << "YA" << endl : cout << "BUKAN" << endl;
		}
	return 0;
	}
}
