//  tower of honoi?.

#include<iostream>
using namespace std;
void tower (int n, char s, char h, char d){
   if(n==0) return;
   tower(n-1,s,d,h);
   cout<<s <<" to " <<d<< endl;
   tower(n-1,h,s,d);
   return;
}
int main(){
    int n;
    cout<<"enter num of disks : ";
    cin>>n;
    tower(n,'A', 'B', 'C');
}