// display this AP-4,7,10,13,16....... upto n terms?.

#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the num : ";
    cin>>n;
    int c=4;
    for(int i=1; i<=n; i++){
        cout<<c<<" ";
        c=c+3;
    }
}