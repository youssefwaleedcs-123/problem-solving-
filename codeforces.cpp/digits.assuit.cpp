#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {

    int t;
    cin >> t; // قراءة عدد الـ test cases

    while (t--) {
        long long n; // استخدمنا long long لأن الحدود بتوصل لـ 10^9
        cin >> n;

        // do-while عشان تضمن طباعة الرقم حتى لو كان 0
        do {
            cout << n % 10 << " "; // طباعة الرقم اللي على اليمين وجنبه مسافة
            n /= 10;               // حذف الرقم اللي طبعناه
        } while (n > 0);

        cout << "\n"; // سطر جديد بعد انتهاء كل test case
    }

    return 0;
	
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q


}
