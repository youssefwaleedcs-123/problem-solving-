#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() 
{ 
    int t;
    cin >> t;

    int arr[101];

    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < t; i++) {
        int n = arr[i];
        for (int j = n; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}
