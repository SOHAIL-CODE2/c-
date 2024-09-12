
// take 3 numbers input and tell if they can be the side of a triangle?.
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter no of a : ";
    cin>>a;
    int b;
    cout<<"enter no of b : ";
    cin>>b;
    int c;
    cout<<"enter no of c : ";
    cin>>c;
    if(a+b>c && b+c>a && c+a>b){
        cout<<"valid triangle";
    }
    else{
        cout<<"invalid triangle";
    }
}