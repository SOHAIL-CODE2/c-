// print the given pattern?.
// A B C D
// A B C
// A B
// A

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<(char)(j+96)<<" "; //big ke liye (j+64)
        }
        cout<<endl;
    }
}