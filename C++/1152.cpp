#include<iostream>
#include<string>
using namespace std;
int main()
{
	int cnt = 0; // ���� ����
	bool flag = true;
	string s; // ���ڿ�
	getline(cin, s);

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')
		{
			flag = true;
		}
		else if (flag)
		{
			flag = false;
			cnt++;
		}
	}
	cout << cnt+1;
}