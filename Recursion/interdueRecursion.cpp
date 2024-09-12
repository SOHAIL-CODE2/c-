//  print the numbers n to 1 ?.
   
   #include<iostream>
   using namespace std;
   void print(int n){
      if(n==10) return;
     cout<<n<<endl;
     print(n+1); 
   }
   int main(){
    int num;
    cout<<"enter num : ";
    cin>>num;
    print(num);
   }