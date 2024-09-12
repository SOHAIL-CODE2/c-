   // print the given pattern?. 
//   * * * * * * *
//   * * *   * * *
//   * *       * *
//   *           * 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num : "; cin>>n;
    int nst=n;
    int nsp= 1;
    for(int i=1; i<=2*n+1; i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1; i<=n; i++){
        for(int k=1; k<=nst; k++){
            cout<<"*";
            }
            for(int j=1; j<=nsp; j++){
                cout<<" ";
            }
            for(int k=1; k<=nst; k++ ){
                cout<<"*";
            }
            nst--;
            nsp+=2;
            cout<<endl;
        
    }
}