#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
#include<vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    int pos = 1;
    long long lowest = 1000005;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) 
    {
       
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i]<lowest )
        {
            lowest = A[i];
            pos = i + 1;
        }
       
    }
        cout << lowest<<" ";
        cout << pos;
    
        return 0;
    
}
