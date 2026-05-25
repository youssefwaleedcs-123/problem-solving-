 #include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
 int main() {
     
     
     long long N;
     cin >> N;
    
     for (long long  i = 2; i*i<=N; i++)
     {
        
    
         
         if (N % i == 0)
         {
             cout << "NO";
             return 0;
         }
         
       
     }
     cout << "YES";
     }
