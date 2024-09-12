// print the given pattern?.
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter num : ";
    cin>>m;
    for(int i=1; i<=m+i; i++){
        for(int j=1; j<=m-i+1; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}