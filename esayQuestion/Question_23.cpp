// if the ages of ram ,shyam and ajay are input through the keyboard, 
// write a program to determine the youngest of the three.

#include<iostream>
using namespace std;
int main(){
    int ram;
    cout<<"enter the ram ages : ";
    cin>>ram;
    int shyam;
    cout<<"enter the shyam ages : ";
    cin>> shyam;
    int ajay;
    cout<<"enter the ajay ages : ";
    cin>> ajay;
    if(ram>ajay){
        cout<<ram<<" - ram is youngest";
    }
    else if(shyam>ajay){
        cout<<ajay<<"- shyam is youngest";
    }
    else{
        cout<<ajay<<" - ajay is youngest";
    }
}
