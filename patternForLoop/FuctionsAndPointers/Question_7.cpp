// if an array contain n element , then 
// check if the given array is a palindrome or not?.

#include<iostream>
using namespace std;

bool isPalindrome(int arr[], int n) {
    int start = 0;  // Pehla element
    int end = n - 1;  // Last element

    // Array ke elements ko dono ends se check karo
    while (start < end) {
        if (arr[start] != arr[end]) {  // Agar koi mismatch hota hai
            return false;  // Palindrome nahi hai
            break;
        }
        start++;  // Start ko aage badhao
        end--;    // End ko piche le jao
    }
    return true;  // Agar saare elements match karte hain to palindrome hai
}

int main() {
    int arr[]={1,2,3,4,3,2,1};
    int a = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < a; i++) {
        cout<<arr[i]<<" ";
    }

    // Palindrome check function call
    if (isPalindrome(arr, a)) {
        cout<<"The array is a palindrome"<<endl;
    } else {
        cout<<"The array is not a palindrome"<<endl;
    }

    return 0;
}
