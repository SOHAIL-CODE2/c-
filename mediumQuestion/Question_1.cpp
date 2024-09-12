// write a program to print product o digit of a given numbers?.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter of a num : ";
    cin>>n;
    int product=1;
    while(n!=0)
    {
        int ld= n%10;
        n/=10;
        product*=ld;
    }
    cout<<product; 
}