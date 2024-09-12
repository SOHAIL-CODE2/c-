// power function(logarithmic) {method 2} ?.

#include<iostream>
using namespace std;
 int powerlog(int a, int b){
    if(b==0) return 1;
    int x= powerlog(a,b/2);
    if(b%2==0) 
        return x*x;
    else 
        return x*x*a;    
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
