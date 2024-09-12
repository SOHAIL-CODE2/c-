
// take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15?.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter num : ";
    cin>>num;
    if((num%5==0 || num%3==0) && (num%15!=0)){
        cout<<" is divisible by 5 or 3 but not divisible by 15";
    }
    else{
        cout<<" is either not divisible by 5 or 3 and it is  divisible by 15";
    }
}