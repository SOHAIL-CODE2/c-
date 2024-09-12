// print the given pattern?.

    //       1
    //     1 2 1
    //   1 2 3 2 1
    // 1 2 3 4 3 2 1

    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter num : ";
        cin>>n;
        int nsp =n-1;
        for(int i=1; i<=n; i++){
                int a=i-1;
                for(int j=1; j<=nsp; j++){ // spaces ke liye ek loop
                    cout<<" ";
                }
                nsp--;
                for(int k=1; k<=i; k++){ // nummber triangle ke liye
                    cout<<k;
                }
                for(int q=1; q<=i-1; q++){ // extra cheez ke liye
                    cout<<a;
                    a--;
                }
                cout<<endl;
        }
    }