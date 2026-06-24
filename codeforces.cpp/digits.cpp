#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
#include<vector>
using namespace std;
int main()
{
    int T;
    cin >> T;

    vector<string> inputs(T);
    for (int i = 0; i < T; i++) {
        cin >> inputs[i];
    }

    for (int i = 0; i < T; i++) {
        string s = inputs[i];
        for (int j = 0; j < s.length(); j++) {
            cout << s[j] << (j == s.length() - 1 ? "" : " ");
        }
        cout << endl;
    }
    
}
