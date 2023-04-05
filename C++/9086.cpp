#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main() {
	string s;
	int t=0;
	cin >> t;
	char* arr = new char[t];
	for (int i = 0; i < t; i++)
	{
		cin >> s;
		cout << s[0] << s[s.size() - 1] << endl;
	}
	
}