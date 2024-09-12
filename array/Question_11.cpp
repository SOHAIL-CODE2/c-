// find the second smallest element in rhe given array?

#include<iostream>
using namespace std;
int main(){
    int arr[]={12,21,22,33,11,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mn = INT16_MAX;
    for(int i=0; i<n; i++){
        mn = min(mn,arr[i]);
    }
    int smn = INT16_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]!=mn && arr[i]<smn){
            smn=arr[i];
        }
    }
    cout<<smn;
}