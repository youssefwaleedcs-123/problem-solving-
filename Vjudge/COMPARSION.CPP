#include <vector>
#include <cmath>
 #include <iostream>
  using namespace std;
 int main() {
      string A, B;
      cin >> A;
      cin >> B;

      if (A.length() > B.length())
      {
          cout << "GREATER";
      }
      else if (A.length() < B.length())
      {
          cout << "LESS";
      }
      else
      {
          if (A > B)
          {
              cout << "GREATER";
          }
          else if (A < B)
          {
              cout << "LESS";
          }
          else
          {
              cout << "EQUAL";
          }
      }
      
      return 0;
  }
