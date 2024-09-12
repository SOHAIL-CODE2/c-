
// take 3 positive integers input and print the gretest of then? use with nasted loop. 

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter num of a : ";
    cin>>a;
    cout<<"enter num of b : ";
    cin>>b;
    cout<<"enter num of c : ";
    cin>>c;
    if(a>b && a>c){
        cout<<" a is gretest";
    }
    else if(b>a && b>c){
        cout<<" b is gretest";
    }
    else{
        cout<<" c is gretest";
    }
}