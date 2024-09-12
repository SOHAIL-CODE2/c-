// print the factorial of a given number 'n'?.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter of a num : ";
    cin>>n;
    int product =1;
    for(int i=1; i<=n; i++){
        product*=i;  
    
    }
    cout<<product;
    
}