// take input percentage of a student and print the grade according to marks
// 1, 81-100 (very good) 2, 61-80(good) 3, 41-61(average) 4, <=40(fail)?.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the num : ";
    cin>>num;
    if(num>=81){
        cout<<"very good";
    }
    else if (num>=61){
        cout<<"good";
    }
    else if(num>=41){
        cout<<"average";
    }
    else{
        cout<<"fail";
    }
}