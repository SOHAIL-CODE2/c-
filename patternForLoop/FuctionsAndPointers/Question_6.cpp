// print the number from 1 to 100?.

#include<iostream>
using namespace std;
int  num(int* n){
    int a = *n;
    for(int i=1; i<=*n; i++)
        cout<<i<<endl;
    return *n;
}
int main(){
    int n;
    cout<<"enter of num : ";
    cin>>n;
    num(&n);
}