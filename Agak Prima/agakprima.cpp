#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, cek, tes, bts;
	cin>>n;
	
	for(int i=0;i<n;i++){
		int m;
		cin>>m;
		cek=0;
		tes=3;
		bts=trunc(m/2);
		
		if (m%2==0 && m!=2 || m==1){
			cek++;
		}
		
		while (tes<=bts){
			if (m%tes==0){
				cek++;
				if(cek>2){
					break;
				}
			}
			tes++;
		}
		
		if (cek>2){
			cout<<"BUKAN"<<endl;
		}
		else {
			cout<<"YA"<<endl;
		}
	}
}
