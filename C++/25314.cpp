#include<iostream>
using namespace std;
int main() {
	int num;
	int cnt = 0;
	cin >> num;
	while (num)
	{
		if (num > 0)
		{
		num -= 4;
		cnt++;

		}
		else break;
	}
	for (int i = 0; i < cnt; i++) {
		cout << "long ";
	}
	cout << "int";
}