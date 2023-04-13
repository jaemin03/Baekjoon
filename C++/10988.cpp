#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	string str_ck;
	
	cin >> str;
	str_ck = str;
	reverse(begin(str_ck), end(str_ck));
	if (str == str_ck)
	{
		cout << "1";
	}
	else
	{
		cout << 0;
	}
}