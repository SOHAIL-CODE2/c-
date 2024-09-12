// find the minimum value out of all the elements in the array?.
          // using this for loops 
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[]={12,32,11,31,25,62,1,2};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int min = INT16_MAX;
//     for(int i=0; i<n; i++){
//         if(min>arr[i]){
//             min = arr[i];
//         } 
//     }
//     cout<<min;
// }
    
        // using this function method?.

    # include<iostream>
    # include<climits>
    using namespace std;
     int min(int arr[], int n){
           int mn = INT16_MAX;
           for(int i =0; i<n; i++){
                 if(mn>arr[i]){
                    mn=arr[i];
                 }
           }
           return mn; 
     }
    int main(){
        int arr[]={99,65,32,14,21,11,3,2,1};
        int n = sizeof(arr)/sizeof(arr[0]);
        int result= min(arr,n);
        cout<<result;
    }