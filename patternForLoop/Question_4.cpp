// print the given pattern? 
// A B C D
// A B C D
// A B C D
// A B C D
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter numbers of cols : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
        cout<<(char) (j+65)<<" ";
        }
        cout<<endl;
    }
} 