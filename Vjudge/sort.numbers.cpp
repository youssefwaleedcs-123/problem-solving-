int main() {
	int A, B, C;
	cin >> A >> B >> C;
	if (A <= B && A <= C && B <= C)
	{
		cout << A << endl;
		cout << B << endl;
		cout << C << endl;

	}
	else if (A <= C && A <= B && C <= B)

	{
		cout << A << endl;
		cout << C << endl;
		cout << B << endl;
	}
	else if (B <= A && B <= C && A <= C)
	{
		cout << B << endl;
		cout << A << endl;
		cout << C << endl;
	}
	else if (B <= C && B <= A && C <= A)
	{
		cout << B << endl;
		cout << C << endl;
		cout << A << endl;
	}
	else if (C <= A && C <= B && A <= B)
	{
		cout << C << endl;
		cout << A << endl;
		cout << B << endl;
	}
	else
	{
		cout << C << endl;
		cout << B << endl;
		cout << A << endl;
	}

	cout << endl;
	cout << A << endl;
	cout << B << endl;
	cout << C << endl;
}
//another sol
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;
	int arr[3] = { A,B,C };
	int original[3] = { A,B,C };
	sort(arr, arr + 3);
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << endl;
	cout << original[0] << endl;
	cout << original[1] << endl;
	cout << original[2] << endl;
}
