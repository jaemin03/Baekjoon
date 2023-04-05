#include<iostream>
using namespace std;
int main()
{
	int n, m, j, k;
	cin >> n >> m;
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = i;
	}

	for (int i = 0; i < m; i++) {
		cin >> j >> k;
		int temp = arr[j - 1];
		arr[j - 1] = arr[k - 1];
		arr[k - 1] = temp;
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]+1 << " ";
	}
}