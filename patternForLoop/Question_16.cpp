// print the given pattern?.
//     *
//     *
// * * * * *
//     * 
//     * 

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter num : ";
    cin>>m;
    int mid=m/2+1;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=i; j++){
            if(i==mid || j==mid ) 
            cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}