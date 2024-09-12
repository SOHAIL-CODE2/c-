// print the given pattern?.
// ****
// ****
// ****
// ****

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter number of a rows : ";
    cin>>m;
    int n;
    cout<<"enter number of a cols : ";
    cin>>n;
    for(int i=1; i<=m;i++){
        for(int j=1; j<=n; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}