#include <iostream>

using namespace std;
int floor(float x){
    int a;
    a=x;
    return a;}

int ceil(float x){
    int a;
    float c;
    a=x;
    c=(x-a);
    if (c<=-0.5){
        	return a-1;}
        else         {
            return a;  }}
int round(float x){
    int a;
    float c;
    a=x;
    c=(x-a);
    if (c>=0.5){
        return a+1;}
    else         {
    	return a;  }}

int main(){
 float a;
 cin>>a;
 if (a>=0){
 	cout << round(a) << " " << floor(a) << endl;
 }
 else if(a<0) {
 	cout << ceil(a) << " " << floor(a) << endl;
 }
 return 0;
}
