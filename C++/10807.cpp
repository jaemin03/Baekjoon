#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	int f;
	cin >> n;
	int *arr=new int[n+1];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cin >> f;
	cout<<count(arr, arr + n, f);
}