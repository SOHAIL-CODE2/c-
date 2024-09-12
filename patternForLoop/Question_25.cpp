// print the given pattern ?.
//      1
//    1 2 3
//   1 2 3 4
//  1 2 3 4 5

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num : ";
    cin>>n;
    int nst =1;
    int nsp =n-1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            cout<<" ";
        }
          nsp = nsp-1;
        for(int j=1; j<=nst; j++){
            cout<<j;
        }
        nst+=2;
        cout<<endl;
    }
}