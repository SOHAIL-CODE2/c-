// find the manimum value out of all the elements in the array?.

#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,5,3,22,66,55,44,99};
    int n = sizeof(arr)/4;
    int mn = arr[0]; 
    for(int i=1; i<n; i++){
        mn = min(arr[i],mn);
    }
    cout<<mn;
}