// print the table of 19 use with for loop ?.

#include<iostream>
using namespace std;
int main(){

    // for(int i=19; i<=190; i++){
    //     if(i%19==0) cout<<i<<" ";
    // }

       // take user input 
       int n;
       cout<<"enter a num : ";
       cin>>n;
       for(int i=n; i<=190; i++){
        if(i%n==0) cout<<i<<" ";
       }
}