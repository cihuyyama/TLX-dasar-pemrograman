#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int i, minim=1e9;
	for(i=0; i < n; i++)
	{
	static int a, b;
	cin >> a >> b;
	if(a*b<minim) minim = a*b;
	}
	cout << minim << endl;
	return 0;
}
