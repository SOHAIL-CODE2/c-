// make a function which calculate 'a' raised to the power'b' using recirsion?.

#include<iostream>
using namespace std;
   int pow(int a, int b){
    if(b==0) return 1;
    return a * pow(a,b-1);
   }
 int main(){
        int a;
        cout<<"enter of base : ";
        cin>>a;
        int b;
        cout<<"enter of power : ";
        cin>>b;
    cout<<pow(a,b);
    }





