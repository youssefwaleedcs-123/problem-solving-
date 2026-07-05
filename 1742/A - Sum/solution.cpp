#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() 
{ int t;
cin >> t;
 vector<string> results;
 for (int i = 0; i < t; i++) {
  int a, b, c;
   cin >> a >> b >> c;
 
        if (a + b == c || a + c == b || b + c == a) { results.push_back("YES");}
        else { results.push_back("NO");}
    }
 
    for (int i = 0; i < t; i++) {cout << results[i] << endl; }
}