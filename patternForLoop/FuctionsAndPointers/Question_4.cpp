//  swap 2 number?.
#include<iostream>
using namespace std;

int main(){
    // mathod no. 1

    // int x=2;
    // int y=5;
    // cout<<x<<" "<<y<<endl;
    // int temp =x;
    // x=y;
    // y= temp;
    // cout<<x<<" "<<y<<endl;

    // method no.2

    // int x=4;
    // int y=2;
    // cout<<x<<" "<<y<<endl;
    // x=x+y;
    // y=x-y;
    // x=x-y;
    // cout<<x<<" "<<y<<endl;

    int x=12;
    int* prt=&x;
   cout<<x<<endl;
    *prt =23;
    int  y=23;
    int* prt=&y;
    cout<<y<<endl;
    *prt =12;
    cout<<x<<endl;
    cout<<y<<endl;
    

}
