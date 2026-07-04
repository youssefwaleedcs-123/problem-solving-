#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	
    int n;
    cin >> n;

    int original = n;
    int reversed = 0;

    while (n > 0) {
        int last_digit = n % 10;
        reversed = reversed * 10 + last_digit;
        n /= 10;
    }

    cout << reversed << "\n";

    if (original == reversed) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }




}
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
