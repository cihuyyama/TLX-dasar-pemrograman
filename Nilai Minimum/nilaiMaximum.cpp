#include <iostream>
using namespace std;
int main(){
  max=0
  int n;
  cout<<"masukan jumlah angkanya :";
  cin>>n;
  for(int i=1;i<=n;i++){
    int m;
    cout<<"masukan bilangan ke-"<<i<<" :";
    cin>>m
    if(m>max){
      max=m
    }
  }
  cout<<"bilangan paling tingginya : "<<max<<endl;
}