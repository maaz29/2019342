

#include <iostream>
using namespace std;
int funcsum (int x);


int main()
{
	int num;
	cout << "Enter a natural number";
	cin >> num;
	cout << "Sum: " << funcsum(num);
}


int funcsum(int x)
{
	int sum;
	if(x>1)
	sum = x + funcsum(x - 1);
	else
	return 1;
}