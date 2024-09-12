// count the number of triplets whose sum is equal to the given value x.

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int count = 0;
//     int x = 12;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             for(int k=j+1; k<n; k++){
//                 if(arr[i]+arr[j]+arr[k]==15){
//                     count++;
//                   cout<<"pairs:("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;  
//                 }
//             }
//         }
//     }
//     cout<<"pairs:"<<count<<endl;
// }
        
              // using this function method ?.

    #include<iostream>
    using namespace std;
    int triplets(int arr[], int n){
        int totlpairs= 0;
        int x =12;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    if(arr[i]+arr[j]+arr[k]==15){
                       totlpairs++;
                   cout<<"pairs:("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;  
                 }
                }
            }
        }
        return totlpairs;
    }
    int main(){
        int arr[]={1,2,3,4,5,6,7,8};
        int n =sizeof(arr)/sizeof(arr[0]);
        int res= triplets(arr,n);
        cout<<res;
    }