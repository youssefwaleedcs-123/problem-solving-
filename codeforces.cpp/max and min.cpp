#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int numbers[3];
    int maximum = -1000005;
    int minimum = 1000005;
    for (int i = 0; i < 3; i++)
    {
        cin >> numbers[i];
        if (numbers[i] > maximum)
        {
            maximum = numbers[i];
        }
        if (numbers[i] < minimum)
        {
            minimum = numbers[i];
        }
        
    }
    
    cout << minimum << " ";
    cout << maximum;
   
    
}
