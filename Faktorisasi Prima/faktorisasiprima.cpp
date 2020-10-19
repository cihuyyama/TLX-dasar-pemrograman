#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int factor=2;
	
	while(n>=factor){
		if(n%factor==0){
			int expo=0;
			while(n%factor==0){
				n=n/factor;
				expo++;
			}
			if(expo!=1){
				cout<<factor<<"^"<<expo;
			}
			else{
				cout<<factor;
			}
			if(n!=1){
				cout<<" "<<"x"<<" ";
			}
		}
		factor++;
	}
	cout<<endl;
	return 0;
}
