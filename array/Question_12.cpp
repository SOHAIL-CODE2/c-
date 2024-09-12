// write a program to revers the array wihtout using any extra array?.

#include<iostream>
using namespace std;
int main(){
    int a[]={2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
      // ye revers ka code hai 
    int i = 0; 
    int j = n-1;
    while(i<j){
        int temp = a[i];
        a[i]= a[j];
        a[j]= temp;
        i++;
        j--;

    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

}