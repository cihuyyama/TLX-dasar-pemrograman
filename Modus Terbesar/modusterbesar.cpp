#include <bits/stdc++.h>
using namespace std;
long long int arr[100000], i, j, l, n, modus, cn;
int main(){
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	
	modus=arr[0];
	l=1;
	
	for(i=0;i<n-1;i++){
		if(arr[i]>0){
			cn=1;
			for(j=i+1;j<n;j++){
				if(arr[i]==arr[j]){
					arr[j]=0;
					cn=cn+1;
				}
			}
			if(cn>1){
				l=cn;
				modus=arr[i];
			}
			else{
				if(cn==l){
					if(arr[i]>modus){
						l=cn;
						modus=arr[i];
					}
				}
			}
		}
	}
	cout<<modus<<endl;
}
