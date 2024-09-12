// print the permutation?.

#include<iostream>
#include<cmath>
using namespace std;
 int fact(int y){
    int f=1; 
    for(int i=1; i<=y; i++)
    {
        f *=i;
    }
    return f;
 }
int main(){
     int n;
     cout<<"enter num of n : ";
     cin>>n;
     int r;
     cout<<"enter num of r : ";
    cin>>r;
    int a=fact(n);
    int b=fact(n-r);
    cout<<(a/b);
}
