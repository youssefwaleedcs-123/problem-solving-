#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N;
    cin >> N;
int min_operations = 100;
 for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
 int current_count = 0;
        while (num % 2 == 0) {  num = num / 2; current_count = current_count + 1; }
 if (current_count < min_operations) { min_operations = current_count; }
    }
cout << min_operations << endl;
}

