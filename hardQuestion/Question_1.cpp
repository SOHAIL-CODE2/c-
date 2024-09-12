// write a function to create a calculate that performs basic arithmetic operations
// (add,sub,mul,and divide) using switch case the calculate should input two num and
// an operator from user. 
#include<iostream>
using namespace std;
int main(){
    int num1;
    cin>>num1;
    char op;
    cin>>op;
    int num2;
    cin>>num2;
            // if statement 
    // if(op=='+') cout<<num1+num2;
    // if(op=='-') cout<<num1-num2;
    // if(op=='*') cout<<num1*num2;
    // if(op=='/') cout<<num1/num2;

    switch (op){
        case '+':
            cout<<num1+num2<<endl;
            break;
        case '-':
            cout<<num1-num2<<endl;
            break;
        case '*':
            cout<<num1*num2<<endl;
            break;
        case '/':
            cout<<num1/num2<<endl;
            break;
    }
}