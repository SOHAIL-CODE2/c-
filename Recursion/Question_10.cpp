// print zig-zag?.

#include<iostream>
using namespace std;
void zigzag(int n){
    if(n==0) return;
   cout<<" "<<n; 
   zigzag(n-1);
   cout<<" "<<n; 
   zigzag(n-1);
   cout<<" "<<n; 
   return;
}
int main(){
    int n;
    cout<<"enter of num : ";
    cin>>n;
    zigzag(n);
}