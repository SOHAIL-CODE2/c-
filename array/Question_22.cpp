// given an array of integers,change the value of all odd indexed
// element to its 2 multiple and increments all even indexed value by 10?.

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++){
//         if(i%2!=0){
//             arr[i]*=2;
//         }
//         else arr[i]+=10;
//     } 
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//}

     // using this function method?.

  #include<iostream>
  using namespace std;
  void fun(int arr[], int n){
        for(int i=0; i<n; i++){
        if(i%2!=0)
            arr[i]*=2;
        else arr[i]+=10;
      }
    return ;
  } 
  int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    fun(arr,n);
     for(int i=0; i<n; i++)
         cout<<arr[i]<<" ";
  }   