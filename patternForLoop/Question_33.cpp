// print the given pattern?.
//    123456789
//    1234 6789
//    123   789
//    12     89 
//    1       9

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num : ";
    cin>>n;
    int nst=n;
    int nsp =1;
    for(int i=1; i<=2*n+1; i++){
        cout<<i;
    }
    cout<<endl;
    for(int i=1; i<=n; i++){
        int a =1;
        for(int j=1; j<=nst; j++){
            cout<<a;
            a++;
        }
        for(int k=1; k<=nsp; k++){
            cout<<" ";
            a++;
        }
        for(int j=1; j<=nst; j++){
            cout<<a;
            a++;
        }
        nst--;
        nsp+=2; 
        cout<<endl;
    }
}