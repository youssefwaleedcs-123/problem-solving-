#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int T;
    cin >> T;
    int* arr = new int[T];
    for (int i = 1; i <= T; i++)
    {

        cin >> arr[i-1];
    }
    for (int j = 1; j <= T; j++)
    {
        int X = arr[j - 1];
        int count = 0;
        for (int k = 1; k <= X; k++)
        {
            if (X % k == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << "Prime" << endl;;
        }
        else { cout << "Not" << endl; }
    }
   
}
