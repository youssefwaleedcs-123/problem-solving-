#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 void largest(int x, int y,int z, int n)
{
	
	if (x> y && x > z && x > n)
	{
		cout << x;
	}
	else if (y > x && y> z && y > n) { cout << y; }
	else if (z > y && z > x && z > n) { cout << z; }
	
	else { cout << n; }
}

int main()
{
	
	int a, b, c, d;
	cin >> a>> b>> c>> d;
	largest(a, b, c ,d);
}
