// 
#include<iostream>
using namespace std;
int main(){
    int x=9;
    int* p=&x;          // (*p) star operator
    cout<<&x<<endl;
    cout<<p<<endl;  // same address print hoga.
    cout<<*p<<endl; // ye address ke andar ka value print karega.
    cout<<&p<<endl; // ye apna new address print karega 
}