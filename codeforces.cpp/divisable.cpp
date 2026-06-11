#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
#include<vector>
using namespace std;
void solve() {
    long long n;
    cin >> n;

    vector<long long> divisors;

    
    for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);

            if (i * i != n) {
                divisors.push_back(n / i); 
            }
        }
    }

    
    sort(divisors.begin(), divisors.end());

    for (size_t i = 0; i < divisors.size(); ++i) {
        cout << divisors[i] << (i + 1 == divisors.size() ? "" : " ");
    }
    cout << "\n";
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
   
   
}
