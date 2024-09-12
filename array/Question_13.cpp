// if an array contain n element , then 
// check if the given array is a palindrome or not?.

#include<iostream>
using namespace std;
int main(){
    int a[]= {1,2,3,4,3,2,2};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    bool palindrome = true;
    int start = 0;
    int end = n-1;
    //  check karte hai ke array palindrome hai ya nhi 
    while(start<end){
        if(a[start]!= a[end]){
            palindrome = false;
            break;
        }
        start++;
        end--;
    } cout<<endl;
    if(palindrome){
        cout<<"array palindrome hai. "<<endl;
    }
    else{
        cout<<"array palindrome nhi hai. "<<endl;
    }
}
