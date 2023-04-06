#include<iostream>
#include<string>
using namespace std;
int main()
{
	int cnt = 0; // 공백 개수
	bool flag = true;
	string s; // 문자열
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