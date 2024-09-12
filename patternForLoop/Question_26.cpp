// print the given pattern ?.
//        A 
//      A B C 
//     A B C D E 
//    A B C D E F 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num : ";
    cin>>n;
    int nst=1;
    int nsp=n-1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            cout<< "  ";
        }
        nsp= nsp-1;
        for(int j=1; j<=nst; j++){
            cout<<(char)(j+64)<<" ";
        }
        nst+=2;
        cout<<endl;
    }
}