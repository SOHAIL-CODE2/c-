// calculate the sum of all element in the given array uing this function ?.

#include<iostream>
using namespace std;
void add (int arr[], int n){  // ye int n array of size ko defind kar rha hai 
    int sum = 0;
    for(int i=0; i<=4; i++){
        sum = sum+arr[i];
    }
    cout<<sum;
}
 int main(){
      int arr[]={1,2,3,4,5};
      int n = sizeof(arr)/sizeof(arr[0]);
      add(arr,n);  // yha aaray ki size ko checj kar rh hai 
 }