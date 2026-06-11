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

    
    for (int case_num = 0; case_num < t; case_num++) {
        int n, m;
        cin >> n >> m; 

        string a, b;
        cin >> a >> b; 
         int count = 0; 

        for (int k = 0; k < n && k < m; k++) {

           
            char char_a = a[n - 1 - k];
            char char_b = b[m - 1 - k];

            if (char_a == char_b) {
                count++;
            }
            else {
                break; 
            }
        }

        
        cout << count << endl;
    }
   
}
