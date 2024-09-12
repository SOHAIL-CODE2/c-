// find the maximimum value out of all the elements in the array?.
  
    // first method.
#include<iostream>
using namespace std;
int main(){
    int arr[]={99,25,96,98,97,65};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max =-1;
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max;
}
        // 2 nd method 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={99,25,96,98,97,65};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int max = arr[0];
//     for(int i=0; i<n; i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     cout<<max;
// }

       // using this function?.

//    #include<iostream>
//    using namespace std;
//        int largest(int arr[],int n){
//        int max = arr[0];
//        for(int i=0; i<n; i++){
//         if(max<arr[i]);
//          max = arr[i];
//        }
//         return max;
//     }  
//    int main(){
//             int arr[]={99,96,98,97,25,3,4};
//             int n = sizeof(arr) / sizeof(arr[0]);
//             int result = largest(arr,n);
//             cout<<result;
//    }    