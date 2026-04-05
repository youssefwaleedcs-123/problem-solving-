#include <iostream>
using namespace std;
int main()
{
	int A, B;
	cin >> A >> B;
	if (A == 2 && B == 3|| A==3 && B==2)
	{
		cout << "1";
	}
	else if (A == 1 && B == 3 || B == 1 && A == 3)
	{
		cout << "2";
	}
	else{cout << "3";}
}
