// write a program to copy the contents of one array into another in the revers order?.

#include<iostream>
using namespace std;
int main(){
    int a[]={2,5,3,4,56 ,45};
    int n = sizeof(a)/sizeof(a[0]);
    int b [n];
    for(int i=0; i<n; i++){
        b[i]=a[n-1-i];
        cout<<b[i]<<" "; 
    }
}