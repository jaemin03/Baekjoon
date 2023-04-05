#include<iostream>
using namespace std;
int main() {
	int n,s,e,k;
	int cnt;
	cin >> n >> cnt;
	int* arr = new int[n];
	for (int i = 0; i <n; i++) {
		arr[i] = 0;
	}
	for (int i = 0; i < cnt; i++)
	{
		
		cin >> s >> e >> k;
		for (int j = s-1; j < e; j++)
		{
			arr[j] = k;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}