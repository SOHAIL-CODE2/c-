// write a program to copy the contents of one array into another 
// in the revers order?.
        // using the first method

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     int brr[7];
//     //int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<=6; i++){
//         brr[i]=arr[6-i];
//     }
//     for(int i=0; i<=6; i++){
//         cout<<brr[i]<<" ";
//     }
    
// }
          // using the 2nd method?.

//      #include<iostream>
//      using namespace std;
//       int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int n = sizeof(arr)/sizeof(arr[0]);
//         int brr[n];
//     for(int i=0; i<n; i++){
//         brr[i]=arr[n-i-1];
//     }
//     for(int i=0; i<n; i++){
//         cout<<brr[i]<<" ";
//     }
    
// }
         
         // using this function.

   #include<iostream>
   using namespace std;
       void revers(int arr[],int brr[],int n){
            for(int i=0; i<n; i++){
                brr[i]=arr[n-i-1];
            }
            for(int i=0; i<n; i++){
                cout<<brr[i]<<" ";
            }
       }
   int main(){
        int arr[]={1,2,3,4,5,6,7};
        int n = sizeof(arr)/sizeof(arr[0]);
        int brr[n];
         revers(arr,brr,n);
   }

     