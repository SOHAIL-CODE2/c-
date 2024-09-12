// power function(logarithmic) {method 1} ?.

#include<iostream>
using namespace std;
 int powerlog(int a, int b){
    if(b==1) return a;
    int x = powerlog(a,b/2);
    int rec=x*x;
    return rec;
 }
int main(){
int a;
cout<<"enter of base : ";
cin>>a;
int b;
cout<<"enter of power : ";
cin>>b;
cout<<powerlog(a,b);
}
