// display this GP- 1,2,4,8,16....... upto n terms?.

#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter of a num : ";
    cin>>n;
    int c=1;
    for(int i=1;i<=n; i++){
        cout<<c<<" ";
        c=c*2;
    }
}