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
    int max = 0;
    int min = 0;
    vector <int>A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];

    }
    for (int i = 0; i < N; i++)
    {
        if (A[i] > max)
        {
            max = i;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (A[i] < min)
        {
            min = i;
        }
    }

    swap(A[max], A[min]);
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }


}
