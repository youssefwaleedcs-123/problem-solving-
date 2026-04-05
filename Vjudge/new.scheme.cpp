#include <iostream>
using namespace std;
int main()
{
	int S1, S2, S3, S4, S5, S6, S7, S8;
	cin >> S1 >> S2 >> S3 >> S4 >> S5 >> S6 >>S7 >> S8;
	bool condition1 = S1 <= S2 && S2 <= S3 && S3 <= S4 && S4 <= S5 && S5 <= S6 && S6 <= S7 && S7 <= S8;
	bool condition2 = S1 >= 100 && S8 <= 675;
	bool condition3 = S1 % 25 == 0 && S2 % 25 == 0 && S3 % 25 == 0 && S4 % 25 == 0 && S5 % 25 == 0 && S6 % 25 == 0 && S7 % 25 == 0 && S8 % 25 == 0;		
	if (condition1 && condition2 && condition3)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}
