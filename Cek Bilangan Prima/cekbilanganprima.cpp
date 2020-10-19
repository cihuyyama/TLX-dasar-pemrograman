#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, i, j, y;
	cin>>b;
	for(j=0;j<b;j++){
		cin>>a;
		for(i=2;i<=trunc(sqrt(a));i++){
			if(a%i==0){
				y=1;
			}
		}
		
		if(y||a==1){
			y=0;
			cout<<"BUKAN"<<endl;
		}
		else{
			cout<<"YA"<<endl;
		}
	}
}
