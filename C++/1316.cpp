#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int n; // 반복 횟수
	int count = 0; // 그룹 단어 갯수

	cin >> n;

	for (int k = 0; k < n; k++)
	{
		vector<char> v; // 문자 확인 벡터
		string str; // 문자열 입력
		char value;
		bool b = true;

		cin >> str;

		for (int i = 0; i < str.length(); i++)
		{
			char top_value = str[i+1];
			char bottom_value = str[i];

			if (top_value == bottom_value) continue;

			if (find(v.begin(), v.end(), bottom_value) == v.end()) v.push_back(bottom_value);
			else b = false;
		}

		if (b)count++;
	}
	cout << count;
}