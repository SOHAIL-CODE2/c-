// print the given pattern use with for loop?.

#include<iostream>
using namespace std;
int main(){
    // rectangle banana hai
    // rows -> m, cols -> 5
    int m;
    cout<<"enter num of rows : ";
    cin>>m;
    int n;
    cout<<"enter num of colns : ";
    cin>>n;
    for(int i=1; i<=m; i++){    // rows = m
        for(int j=1; j<=n; j++){ // cols = n
            cout<<"* ";
        }
        cout<<endl;
    }
}
