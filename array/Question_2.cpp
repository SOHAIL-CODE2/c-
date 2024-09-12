// calculate the product of all the element in the given array?.

#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,4,2,4,6,3,1};
    int n= sizeof(arr)/4;
    int pro = 1; // initailize  to 1 for multiplication
    for(int i=0; i<n; i++){
        pro*=arr[i];
    }
    cout<<pro;
}