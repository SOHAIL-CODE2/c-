// print the given pattern?.
// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       1 2
// 1           1

#include <iostream>
using namespace std;

int main() {
    int n;     // Rows ki total sankhya
    cout<<"enter num : ";
    cin>>n;

    for (int i = 0; i <=n; i++) {
        // Pehle increasing sequence print karo
        for (int j = 1; j <= n - i; j++) {
            cout << j << " ";
        }

        // Beech me spaces print karo
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "  ";
        }

        // Phir decreasing sequence print karo
        for (int j = n - i; j >= 1; j--) {
            if (j != n) { // Taaki beech me koi number do baar na aaye
                cout << j << " ";
            }
        }

        cout << endl; // Nayi line shuru karo
    }

    return 0;
}
