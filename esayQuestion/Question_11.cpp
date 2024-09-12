
// if coast price and selling price of an item is input through the keyboard, write a progtram 
// to determine whether the seller has made profit of incurred loss or no profit no loss.
// also determine how much profit he made or loss he incurred ?.

#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"enter coast price : ";
    cin>>cp;
    int sp;
    cout<<"enter selling price : ";
    cin>>sp;
    if(sp>cp){
        cout<<"profit : "<<sp-cp;
    }
    else if(sp<cp){
        cout<<"loss : "<<cp-sp;
    }
    else{
        cout<<"no profit, no loss";
    }
}