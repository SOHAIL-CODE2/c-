//  print the given pattern?.
//         *
//       * * * 
//     * * * * *
//   * * * * * * *

#include<iostream>
using namespace std;
int main(){
        int n;
        cout<<"enter num : ";
        cin>>n;
        int nst =1;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n-i; j++){
                cout<<" ";
            }
            for(int j=1; j<=nst; j++){  // ye bhi kar kr rha hai (2*n-1)
                cout<<"*";
            }
            nst+=2;
            cout<<endl;
        }

    }