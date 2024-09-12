//  print the numbers  1 to 10?.
   
   #include<iostream>
   using namespace std;
//    method 1st.
//    void print(int n){
//       if(n>10) return;
//      cout<<n<<endl;
//      print(n+1); 
//    }
//    int main(){
//     int num;
//     cout<<"enter num : ";
//     cin>>num;
//     print(num);
//    }
    // method 2nd.
   void print(int n){
      if(n==0) return;
       print(n-1); 
      cout<<n<<endl; 
   }
   int main(){
    int num;
    cout<<"enter num : ";
    cin>>num;
    print(num);
   }