// write a program to swaping in 2 number wiht using 
// function inside an array?.

#include<iostream>
using namespace std;
  void fun(int arr[]){
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
     return;
  }
int main(){
   int arr[2]={2,8};
   // swap ke phale arry ka  element print hoga
   cout<<arr[0]<<" "<<arr[1]<<endl;
   fun(arr);  // yha function lo call kar rhe hai.
   // swap ke baad array ka element print hoga
   cout<<arr[0]<<" "<<arr[1]<<endl;
}