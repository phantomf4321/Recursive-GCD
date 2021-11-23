#include<iostream>

using namespace std;

int gcd(int a, int b)
{
    a = abs(a);
    b = abs(b);
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}


int main()
{
    int n, m;
    cin >> n >> m;

    cout << gcd(n, m) << endl;


    system("pause");
	return 0;
}
