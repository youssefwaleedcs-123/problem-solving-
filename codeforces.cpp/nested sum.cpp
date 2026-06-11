#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<long long> outputs(t);
     for (int k = 0; k < t; k++) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long total_sum = 0;
          for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                total_sum += a[i] * a[j];
            }
        }
       outputs[k] = total_sum;
    }

    for (int k = 0; k < t; k++) {
        cout << outputs[k] << endl;
    }
}
