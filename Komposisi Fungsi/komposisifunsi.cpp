#include <bits/stdc++.h>
using namespace std;

void komposisi(int a, int b, int k, int x){
	int fx, i, l;
	fx=abs(a*x+b);
	if(k>1){
		for(i=1;i<k;i++){
			l=abs(a*fx+b);
			fx=l;
		}
	}
	cout<<fx;
}

int main(){
	int a, b, k, x;
	cin>>a>>b>>k>>x;
	komposisi(a,b,k,x);
	cout<<endl;
}
