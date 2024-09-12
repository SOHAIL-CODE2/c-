
// take a positive integers input and tell if it is a three digit or not?.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no : ";
    cin>>n;
    if(n>99 || n<100){
        cout<<"three digit num ";
    }
    else{
        cout<<"not a thrre digit num ";
    }
}