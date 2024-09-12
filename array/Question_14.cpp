//  given an array of marks of students, if the marks
// of any students is less then 35 print its roll number.
// [roll number here refers to the index of the array array.]?.

#include<iostream>
using namespace std;
int main(){
    int marks[10]={96,98,95,45,34,47,25,31,32,78};
    for(int i=0; i<=9; i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
            }
}