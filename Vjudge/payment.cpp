#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int rem = N % 1000;
	if (N % 1000 == 0)
	{
		cout << rem;
	}
	else
	{
		cout << 1000-rem;
	}	
}
