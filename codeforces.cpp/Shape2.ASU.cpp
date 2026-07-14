#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Loop خارجية للسطور من 1 إلى N
    for (int i = 1; i <= N; i++) {

        // 1. طباعة المسافات قبل النجوم
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }

        // 2. طباعة النجوم
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }

        // سطر جديد بعد نهاية كل صف
        cout << "\n";
    }

    return 0;
}
