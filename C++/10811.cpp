#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n, m;

	cin >> n >> m;
	vector<int>v;
	for (int i = 0; i < n; i++)
	{
		v.push_back(i + 1);
	}
	for (int i = 0; i < m; i++)
	{
		int num1, num2;
		cin >> num1 >> num2;
		reverse(v.begin() + num1-1, v.begin() + num2);
	}
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
}