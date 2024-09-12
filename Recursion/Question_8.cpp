// maze path?.
#include<iostream>
using namespace std;
 int maze(int cr, int cc, int er, int ec){
    int rightway = 0;
    int downway = 0;
    if(cr==er && cc==ec)  return 1;
    if(cr==er){
        rightway +=maze(cr,cc+1,er,ec);
    }
    if(cc==ec){
        downway +=maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
         rightway +=maze(cr,cc+1,er,ec);
         downway +=maze(cr+1,cc,er,ec);
    }
    int totalway = rightway + downway;
    return totalway;
 }
int main(){
    int n;
    cout<<"enter of num of row : ";
    cin>>n;
    int m;
    cout<<"enter of num of col : ";
    cin>>m;
    int noOFWay = maze(1,1,n,m);
    cout<<noOFWay;
}


