// calculate the product of all the elements in the given array?.

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4};
//     int n = sizeof(arr)/sizeof(arr[0]);
//      int pro =1;
//      for(int i=0; i<n; i++){
//         pro*=arr[i];
//      }
//      cout<<pro;
// }   
     
       // using this function?.
 
   #include<iostream>
   using namespace std;
   int multiple(int arr[],int n){
    int pro = 1;
    for(int i=0; i<n; i++){
        pro*= arr[i];
    }
    return pro;
   }
   int main(){
        int arr[]={1,2,3,4};
        int n = sizeof(arr)/ sizeof(arr[0]);
        int result = multiple(arr,n);
        cout<<result;
   }
