#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, p, arr1[101][101], arr2[101][101], arr3[101][101];
	int i, j, k, jumlah=0;
	
	cin>>n>>m>>p;
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>arr1[i][j];
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			cin>>arr2[i][j];
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<p;j++){
			for(k=0;k<m;k++){
				jumlah=jumlah+arr1[i][k]*arr2[k][j];
			}
			arr3[i][j]=jumlah;
			jumlah=0;
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<p;j++){
			cout<<arr3[i][j];
			if(j<p-1){
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
