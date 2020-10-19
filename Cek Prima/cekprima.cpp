#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	bool prime;
	cin>>n;
	for(int i=0;i<n;i++){
		int m;
		prime=true;
		cin>> m;
		if (m==1){
			prime=false;
		}
		else{
			for(int j=2;j<m;j++){
				if(m%j==0){
					prime=false;
				}
			}
		}
		if(prime==true){
			cout<<"YA"<<endl;
		}
		else{
			cout<<"TIDAK"<<endl;
		}
	}
}
