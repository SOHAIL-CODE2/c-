// write a program to print sum of all evan digits of  Given number.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter of a num : ";
    cin>>n;
    int sum=0;
    while(n!=0)
    {
        int ld= n%10;
        if(n%2==0){
        sum+=ld;
        }
        n/=10;    
        
    }
    cout<<sum<<endl; 
}