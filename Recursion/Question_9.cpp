// maze path in revers?.

#include<iostream>
using namespace std;
int maze2(int n, int m){
    int rightways = 0; 
    int downway = 0;
    if(n==1 && m==1) return 1;
    if(n==1){
        rightways +=maze2(n,m-1);
    }
    if(m==1){
        downway +=maze2(n-1,m);
    }
    if(n>1 && m>1){
        rightways +=maze2(n-1,m);
        downway +=maze2(n,m-1);
    }
    int totalway = rightways + downway;
      return totalway;
}
int main(){
        int n;
        cout<<"enter of num of row : ";
        cin>>n;
        int m;
        cout<<"enter of num of col : ";
        cin>>m;
        int sr =maze2(n,m);
            cout<<sr;
}