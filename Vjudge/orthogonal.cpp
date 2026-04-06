#include <iostream>
#include <string>
using namespace std;
#include<vector>
int main() 
{
	int N;
	cin >> N;
	vector<int>A(N);
	for (int i = 0; i<N; i++)
	{
		cin >> A[i];
	}
	vector<int>B(N);
	for (int i = 0; i < N; i++)
	{
		cin >> B[i];
	}
	int result = 0;
	for (int i = 0; i < N; i++)
	{
		result += (int)A[i] * B[i];
	}
	if (result == 0)
	{
		cout << "Yes";
	}
	else 
	{
		cout << "No"; 
	}
}
