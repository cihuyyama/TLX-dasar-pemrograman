#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[100], n=0, m;
	while(!cin.eof()){
		cin>>arr[n];
		n++;
		continue;
	}
	
	for(m=n-2;m>=0;m--){
		cout<<arr[m]<<endl;
	}
}
