// find the second largest element in rhe given array?.

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,22,33,41,45,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mx = INT16_MIN;
    for(int i=0; i<n; i++){
        mx= max(mx,arr[i]);
    }
    int smx = INT16_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]!=mx) smx = max(smx,arr[i]);
    
    }
    cout<<smx; 
}