// write a program to print the sum of given number and its revers?.

#include<iostream>
using namespace std;
int main(){
    int n,r=0,sum;
    cout<<"enter of a num : ";
    cin>>n;
    int ld=n;
    while(n!=0){
        r=r*10+n%10;
        n/=10;
    }
    sum=ld+r;
    cout<<r<<sum;
}