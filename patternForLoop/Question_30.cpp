// print the given pattern?.
//   * * *   * * *
//   * *       * *
//   *           *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num : "; cin>>n;
    int nst = n;
    int nsp= 1;
        for(int i=1; i<=n; i++){
        for(int j=1; j<=nst; j++){
            cout<<"*";
        }
        for(int k=1; k<=nsp; k++){
            cout<<" ";
        }
        for(int j=1; j<=nst; j++){
            cout<<"*";
        }
        nst--;
        nsp+=2;
        cout<<endl;
    }
}