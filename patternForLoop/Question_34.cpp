// print the given pattern?.
    // ABCDEFGHI
    // ABCD ABCD
    // ABC   ABC 
    // AB     AB
    // A       A

 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"enter num : ";
    cin>>n; 
    int nst=n;
    int nsp= 1;
    for(int i=1; i<=2*n+1; i++){
        cout<<(char)(i+64);
    }
        cout<<endl;
    for(int i=1; i<=n; i++){
        int a =1;
    for(int j=1; j<=nst; j++){
        cout<<(char)(j+64);
    }
    for(int k=1; k<=nsp; k++){
        cout<<" ";
    }
    for(int j=1; j<=nst; j++ ){
        cout<<(char)(j+64);
    }
    nst--;
    nsp+=2;
    cout<<endl;
    }    
 }