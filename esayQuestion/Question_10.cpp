// take integer input and print the absolute value of that integer in c++ ?.

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter x : ";
    cin>>x;
    if(x>=0){
        cout<<x;
    }else{
        cout<<-x;
    }
}