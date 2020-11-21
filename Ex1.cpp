#include <iostream>
#include <cmath>
using namespace std;

int S(int x, int n)
{
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += pow(-1, i + 1) * pow(x, i);
	}
	return sum;
}
int main()
{
	int x, n;
	cout << "Nhap so x: ";
	cin >> x;
	do
	{
		cout << "Nhap so n: ";
		cin >> n;
		if (n <= 0)
			cout << "Vui long nhap n > 0" << endl;
	} while (n <= 0);

	cout << "S(" << x << ", " << n << ")=" << S(x, n) << endl;
	return 0;
}

