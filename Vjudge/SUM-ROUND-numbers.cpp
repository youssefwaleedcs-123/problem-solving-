#include <iostream>
#include <cmath>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector <int> res;
        int p = 1;

        while (n > 0) {
            if (n % 10 > 0) {
                res.push_back((n % 10) * p);
            }
            n = n / 10;
            p = p * 10;
        }

        cout << res.size() << endl;
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
