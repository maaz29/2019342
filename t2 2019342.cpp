
// MAAZ TARIQ'S OWN COD3E----------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <math.h>
using namespace std;
int funcpower(int x, int y);
int main()
{
	int base, exp;
	cout << "Enter base: ";
	cin >> base;
	cout << "Enter exponent: ";
	cin >> exp;
	cout << base << "^" << exp << "= " << funcpower(base, exp);
}

int funcpower(int x, int y)
{
	if (y > 1)
	{
		int ans;
		ans = x * funcpower(x, y - 1);
		return ans;
	}
	else {
		return x;
	}
}
//UNMATCHABLE READIBILITY AND MODULARITY--------------------------------------------------------------------------------------------------------