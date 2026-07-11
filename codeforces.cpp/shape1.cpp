#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    
    int N;
    cin >> N;

    for (int k = N; k >= 1; k--) {
       
        for (int j = 0; j < k; j++)
        {
            cout << "*";

        }

            cout << "\n";
    }

    return 0;
}
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P
