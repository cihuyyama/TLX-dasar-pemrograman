#include <bits/stdc++.h>
using namespace std;

int main(){
	string s, t;
	cin>>s>>t;
	
	for(int i=0;i<t.size();i++){
	s.erase(remove(s.begin(),s.end(),'ke'),s.end());
	}
	cout<<s<<endl;
}
