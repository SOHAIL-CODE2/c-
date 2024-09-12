// write a function to calculate the nth fibonacci using recursion?.

#include<iostream>   
using namespace std;
 int fibo(int n){
      if(n==1 ||  n==2) return 1;
    return fibo(n-1) + fibo(n-2);
   // 1 1 2 3 5 8 13 21 34 fibo seris e
 }
    int main(){
        int n;
         cout<<"enter of num : ";
         cin>>n;
         cout<<fibo(n);
    }
