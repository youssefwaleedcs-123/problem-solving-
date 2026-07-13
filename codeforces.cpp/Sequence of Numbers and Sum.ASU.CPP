#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {

	int N, M;
	
	while (cin>>N>>M)
	{
		int sum = 0;
		if (N> M)
		{
			swap(N, M);
		}
			if (N > 0 && M > 0)
			{
				for (int i = N; i <= M; i++)
				{
					
					cout << i << " ";
					sum = sum + i;

				}
				cout << " sum =" << sum << "\n";


			}
			else { return 0; }
		
		
		

	}


https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R
		
}
