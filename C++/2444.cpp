#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	if (1 <= n && n <= 100)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 0; j < n - i; j++) cout << " ";
			for (int k = 0; k < 2 * i - 1; k++) cout << "*";
			cout << endl;
		}

		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < i ; j++) cout << " ";
			for (int k = 0; k < 2 * n - (2 * i + 1); k++) cout << "*";
			cout << endl;
		}
	}
}