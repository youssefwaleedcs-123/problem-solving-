#include <vector>
#include <cmath>
 #include <iostream>
  using namespace std;

bool isPrime(long long n){

    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    vector<long long> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }

    for (int i = 0; i < N; i++) {
        long long r = sqrt(x[i]);

        if (r * r == x[i] && isPrime(r)) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
