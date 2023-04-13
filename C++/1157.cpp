#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
#define ALPHABET 26

typedef struct Alphabet_Count {
	char alphabet;
	int count=0;
};

int main()
{

	Alphabet_Count ab[ALPHABET];

	for (int i = 0; i < ALPHABET; i++) // a~z, 1~26을 구조체 배열 순서에 맞게 초기화
	{
		ab[i].alphabet = i + 65;
		ab[i].count = i;
	}

	string str;
	cin >> str;
	int count[ALPHABET] = { 0, }; // 알파벳의 사용 횟수를 담는 배열
	int overlap = 0; // 중복 확인

	for (int i = 0; i < str.length(); i++) // 문자열 대문자로 변환
	{
		str[i] = toupper(str[i]);
		
		for (int j = 0; j < ALPHABET; j++) // 문자를 비교하고 참이면 count 증가
		{
			if (str[i] == ab[j].alphabet) count[ab[j].count]++;
		}
	}

	int max = *max_element(begin(count), end(count)); // count배열에서 최대값 찾기
	int p; // count배열에서 최대값 위치

	for (int i = 0; i < ALPHABET; i++)
	{
		if (max == count[i])
		{
			overlap++;
			p = i;
		}
	}

	if (overlap == 1) cout << ab[p].alphabet;
	else if(1 < overlap) cout << "?";
	
}