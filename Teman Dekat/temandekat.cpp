#include <bits/stdc++.h>
using namespace std;

long int x[1000], y[1000];

void td(int n, int d){
	long int min=2000000, max=-1, hasil, xr, yr;
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;i<n;j++){
			xr=abs(x[i]-x[j]);
			yr=abs(y[i]-y[j]);
			if(xr>max){
				max=hasil;
			}
			if(yr<min){
				min=hasil;
			}
		}
	}
	cout<<xr<<" "<<yr<<endl;
}

int main(){
	int n, d;
	cin>>n>>d;
	td(n, d);
}
