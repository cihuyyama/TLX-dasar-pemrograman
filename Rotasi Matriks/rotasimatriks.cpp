#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, arr[101][101], i, j;
	cin>>n>>m;
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	
	for(i=0;i<m;i++){
		for(j=m-1;j>=0;j--){
			cout<<arr[j][i];
			if(j>0){
				cout<<" ";
			}
			else{
				cout<<endl;
			}
		}
	}
}
