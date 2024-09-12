// print a program in factors

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter of a num : ";
    cin>>n;
    int f=1;
    for(int i=n/2; i>=1; i--){
        if(n%i==0){ //f=1;
            cout<<i<<" ";
            break;
        }
       // cout<<f<<" ";
    }
}