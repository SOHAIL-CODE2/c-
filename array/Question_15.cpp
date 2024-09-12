//  given an array of marks of students, if the marks
// of any students is less then 35 print its roll number.
// [roll number here refers to the index of the array array.]?.
        // using this function method.

  #include<iostream>
  using namespace std;
  void marks(int arr[]){
    for(int i=0; i<=9; i++){
        if(arr[i]<35){
            cout<<i<<" ";
        }
    }
  }
  int main(){
      int arr[10]={99,96,95,85,31,36,32,45,32,30};
      marks(arr);
  }      