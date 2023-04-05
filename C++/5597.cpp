#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int ck[30] = { 0, };
	int num;
	int cck[2];
	int cnt = 0;
	for (int i = 0; i < 28; i++)
	{
		cin >> num;
		ck[num-1] = 1;
	}
	for (int i = 0; i < 30; i++) {
		if (ck[i]==1) continue;
		else
		{
			cck[cnt] = i;
			cnt++;
		}
	}
	cout << min(cck[0], cck[1])+1 <<endl<< max(cck[0], cck[1])+1;
}