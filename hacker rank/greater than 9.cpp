#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
   string number[]{ "zero","one" ,"two","three","four","five","six","seven","eight","nine"};
int n;
cin >> n;
if(n<=9)
{
    
    cout << number[n];
}
else
{
    cout << "Greater than 9";
}

    return 0;
}
