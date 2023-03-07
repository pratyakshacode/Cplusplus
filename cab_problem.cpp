#include <iostream>
using namespace std;

int main()
{
	int t, n;
	cout << "Enter test cases: ";
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cout << "Enter the no. of persons: ";
		cin >> n;

		if (n <= 4)
		{
			cout << "1" << endl;
		}
		else if (n % 4 == 0)
		{
			cout << (n / 4) << endl;
		}
		else if (n % 4 != 0)
		{
			cout << (n / 4) + 1 << endl;
		}
	}
	return 0;
}
