// find the totol number of pairs in the array whose
// sum is equal to the given value x?.

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int total= 0;
//     int x=12;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i] + arr[j]==x){
//                 total++;
//                  cout<<"pairs("<< arr[i]<<","<<arr[j]<<")"<<endl;
//             }
//         }
//     }
//     cout<<total;
// }

            // using this function method?.
    #include<iostream>
    using namespace std;
    int totalpairs(int arr[],int n){
          int count = 0;
          int x = 12;
           for(int i=0; i<n; i++){
              for(int j=i+1; j<n; j++){
                if(arr[i] + arr[j] ==x){
                    count++;
                  cout<<"pairs:("<<arr[i]<<","<<arr[j]<<")"<<endl;  
                }
              }
           }
           return count;
    }
    int  main(){
            int arr[]={1,2,3,4,5,6,7,8,9};
            int n = sizeof(arr)/sizeof(arr[0]);
            int res=totalpairs(arr,n);
            cout<<"pairs:"<<res;
    }