#include<iostream>
using namespace std;
int main() {
	int n, m, j, k;
	cin >> n >> m;
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < m; i++)
	{
		cin >> j >> k;

		reverse(arr[j], arr[k]);

	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
	}
}
