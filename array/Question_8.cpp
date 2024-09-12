// find the difference between the sum of element
//  at even indices to the sum of element at odd indices ?.

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     int n= sizeof(arr)/ sizeof (arr[0]);
//     int SumOfEven = 0;
//     int SumOfOdd = 0;
//     for(int i=0; i<n; i++){
//         if(i%2==0){
//             SumOfEven+=arr[i];
//         }
//         else{
//            SumOfOdd+=arr[i];
//         }  
//     }
//     int differenece = SumOfEven-SumOfOdd;
//     cout<<differenece;
// }

    // USING this function method?.

   #include<iostream>
   using namespace std;
    void fun(int arr[], int n){
        int SumEven = 0;
        int SumOdd = 0;
           for(int i=0; i<n; i++){
            if(i%2==0){
                SumEven +=arr[i];
            }
            else{
                SumOdd +=arr[i];
            } 
           } 
            int def = SumEven - SumOdd;
            cout<<def;                                                     
            return ;
    }
   int main(){
            int arr[]={1,2,3,4,5,6,7};
            int n = sizeof(arr)/sizeof(arr[0]);
            fun(arr,n);
           
   }   