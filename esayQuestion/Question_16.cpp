// given the lenght and breght of a rectangle, write a program to find whether
// the area of the rectangle is greater then its perimeters?.

#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"enter the lenght : ";
    cin>>l;
    int b;
    cout<<"enter the breght : ";
    cin>>b;
    int a =l*b;
    int p = 2*(l+b);
    cout<<a<<endl;
    cout<<p<<endl;   
}