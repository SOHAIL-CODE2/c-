// print the given pattern?.
//   A B C D E F G H I 
//   A B C D   A B C D 
//   A B C       A B C
//   A B           A B 
//   A               A 

//  or ye digit ke liye hai


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num : "; cin>>n;
     int ch = n;
    int nsp = 1;
    for(int i=1; i<=2*n+1; i++){
        cout<<i;   //(char)(i+64);  use in chararter 
    }
    cout<<endl;
     for(int i=1; i<=n; i++){
         for(int j=1; j<=ch; j++){
            cout<<j;  //(char)(j+64);
         }
         for(int k=1; k<=nsp; k++){
            cout<<" ";
         }
         for(int j=1; j<=ch; j++){
            cout<< j;   //(char)(j+64);
         }
         ch--;
         nsp+=2;
         cout<<endl;
     }
}