#include<iostream>
#include<string.h>
#define MAX_CHARACTERS 26
using namespace std;
int main()
{
    string s;
    cin >> s;
    int arr[MAX_CHARACTERS];
    fill_n(arr, MAX_CHARACTERS, -1);

    for (int i = 0; i < s.length(); i++) {
        int index = s[i] - 'a';
        if (arr[index] == -1) {
            arr[index] = i;
        }
    }

    for (int i = 0; i < MAX_CHARACTERS; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}