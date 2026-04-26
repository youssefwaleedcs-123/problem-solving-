#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	double price[5] = { 4.00,4.50,5.00,2.00,1.50 };
	int X;
	double Y;
	cin >> X >> Y;
	double Total = price[X-1] * Y;
	cout << "Total: R " << fixed << setprecision(2) << Total << endl;
	
	

	

}
