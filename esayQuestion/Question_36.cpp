// write a program to ptint odd no from 1 to 100? use with continue loop.

#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=100; i++){
        if(i%2==0) continue;
        cout<<i<<" ";
    }
}