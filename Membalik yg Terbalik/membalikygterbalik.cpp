#include <bits/stdc++.h>
using namespace std;

int reverse(int x){
	int temp=x, dp=0;
	
	while(temp%10==0){
			temp=temp/10;
	}
	
	while(temp>0){
		dp=dp*10+temp%10;
		temp=temp/10;
	}
	return dp;
}

int main(){
	int a, b, c;
	cin>>a>>b;
	
	c=reverse(a)+reverse(b);
	cout<<reverse(c)<<endl;
}
