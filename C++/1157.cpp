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

	for (int i = 0; i < ALPHABET; i++) // a~z, 1~26�� ����ü �迭 ������ �°� �ʱ�ȭ
	{
		ab[i].alphabet = i + 65;
		ab[i].count = i;
	}

	string str;
	cin >> str;
	int count[ALPHABET] = { 0, }; // ���ĺ��� ��� Ƚ���� ��� �迭
	int overlap = 0; // �ߺ� Ȯ��

	for (int i = 0; i < str.length(); i++) // ���ڿ� �빮�ڷ� ��ȯ
	{
		str[i] = toupper(str[i]);
		
		for (int j = 0; j < ALPHABET; j++) // ���ڸ� ���ϰ� ���̸� count ����
		{
			if (str[i] == ab[j].alphabet) count[ab[j].count]++;
		}
	}

	int max = *max_element(begin(count), end(count)); // count�迭���� �ִ밪 ã��
	int p; // count�迭���� �ִ밪 ��ġ

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