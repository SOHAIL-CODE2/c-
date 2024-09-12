// write a program to check if a numbers composite and prime?.  use in for loop.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter of a num : ";
    cin>>num;
    bool fg=true; // true means prime
    for(int i=2; i<=num/2; i++){
        if(num%i==0){
            fg=false; // false means composite
            break;
        }
    }
    if(num==1) cout<<"neither primr nor composite";
    else if(fg==true) cout<<"prime";
    else if (fg==false) cout<<"composite";
}