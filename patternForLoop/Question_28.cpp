 // print the given pattern?.
    //         A 
    //        A B
    //       A B A
    //     A B C B A
    //   A B C D C B A

 #include<iostream>
 using namespace std;
 int main(){
    int n;
     cout<<"enter num : ";
     cin>>n;
     int nsp =n-1;
     for(int i=1; i<=n; i++){
        int a = i-1;
        for(int k=1; k<=nsp; k++){
            cout<<"  ";
        }
        nsp--;
        for(int j=1; j<=i; j++){
            cout<<(char)(j+64)<<" ";
        }
        for(int q=1; q<=i-1; q++){
            cout<<(char)(a+64)<<" ";
            a--;
        }
        cout<<endl;
     }
 }