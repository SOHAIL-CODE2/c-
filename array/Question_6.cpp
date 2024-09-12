// count the number of element in given array greater than a given number x .?

#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,6,9,12,};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=4;
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>x){
        count ++;
    }
  }
    cout<<"num of element greter than -> "<< x << " is " << count;
    return 0;
}