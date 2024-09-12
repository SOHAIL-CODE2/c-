//  pass by value ?.

#include<iostream>
using namespace std;
void swap(int x, int y){
    int temp;
    x=y;
    y=temp;
    
}
int main(){
    int x=89;
    int y=12;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}