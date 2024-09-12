// given an integers n. create an array contaiting
// squares of all natural number till n and print the
//  elements of the array?. 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num of array element : ";
    cin>>n;
     int arr[n];
        for(int i=1; i<=n; i++){
        arr[i-1] = i*i;
     }
       for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
}