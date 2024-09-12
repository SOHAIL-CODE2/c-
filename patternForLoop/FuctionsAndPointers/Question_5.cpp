// print the max number ?.

#include<iostream>
using namespace std;
void maxTwo(int* a, int* b){
    int v=*a;
    if(*a > *b)
         cout<<*a<<endl;
    else  
         cout<<*b<<endl; 
          
}
int main(){
    int x;
    cout<<"enter of num x : ";
    cin>>x;
    int y;
    cout<<"enter of num y : ";
    cin>>y; 
    maxTwo(&x,&y);
 }
 