#include <bits/stdc++.h>
using namespace std;

int arrA[1000], arrB[1000];

void swp(char x, int num1, char y, int num2){
	int temp;
	
	if (x=='A' && y=='A'){
		temp=arrA[num1-1];
		arrA[num1-1]=arrA[num2-1];
		arrA[num2-1]=temp;
	}
	
	else if(x=='A' && y=='B'){
		temp=arrA[num1-1];
		arrA[num1-1]=arrB[num2-1];
		arrB[num2-1]=temp;
	}
	
	else if(x=='B' && y=='B'){
		temp=arrB[num1-1];
		arrB[num1-1]=arrB[num2-1];
		arrB[num2-1]=temp;
	}
	
	else if(x=='B' && y=='A'){
		temp=arrB[num1-1];
		arrB[num1-1]=arrA[num2-1];
		arrA[num2-1]=temp;
	}
}

int main(){
	int n, m, i, j, nums1, nums2;
	char a, b;
	
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>arrA[i];
	}
	
	for(i=0;i<n;i++){
		cin>>arrB[i];
	}
	
	cin>>m;
	
	for(i=0;i<m;i++){
		cin>>a>>nums1>>b>>nums2;
		swp(a, nums1, b, nums2);
	}
	
	for(i=0;i<n;i++){
		if(i>0){
			cout<<" ";
		}
		cout<<arrA[i];
	}
	
	cout<<endl;
	
	for(i=0;i<n;i++){
		if(i>0){
			cout<<" ";
		}
		cout<<arrB[i];
	}
	
	cout<<endl;
}
