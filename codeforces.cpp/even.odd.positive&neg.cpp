#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
	using namespace std;

	int main() {
		int N;
		cin >> N;
		int* arr = new int[N];
		int even = 0;
		int odd = 0;
		int positive = 0;
		int negative = 0;

		for (int i = 1; i <= N; i++)
		{
			cin >> arr[i];
		}
		for (int i = 1; i <= N; i++)
		{
			if (arr[i] % 2 == 0)
			{
				even++;
			}
		}
		for (int i = 1; i <= N; i++)
		{
			if (arr[i] % 2 != 0)
			{
				odd++;
			}
		}
		for (int i = 1; i <= N; i++)
		{
			if (arr[i] > 0)
			{
				positive++;
			}
		}
		for (int i = 1; i <= N; i++)
		{
			if (arr[i] < 0)
			{
				negative++;
			}
		}
		cout << "Even:" << even << endl;
		cout << "Odd:" << odd << endl;
		cout << "Positive:" << positive << endl;
		cout << "Negative:" << negative<< endl;



	}
