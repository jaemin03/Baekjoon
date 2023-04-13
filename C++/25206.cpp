#include<iostream>
#include<string>
using namespace std;

#define MAX_SUBJECT 20

typedef struct Subject
{
	string subject;
	double credit = 0;
}Subject;

typedef struct MyCredit
{
	Subject data;
	double my_credit = 0;
	bool pass = false;
}MyCredit;

int main()
{
	MyCredit my[MAX_SUBJECT];
	double total_subject_credit = 0;
	double total_my_credit = 0;
	string my_credit;

	for (int i = 0; i < MAX_SUBJECT; i++)
	{
		cin >> my[i].data.subject>> my[i].data.credit >> my_credit;

		if (my_credit == "P") my[i].pass = true;
		else if (my_credit == "A+") my[i].my_credit = 4.5;
		else if (my_credit == "A0") my[i].my_credit = 4.0;
		else if (my_credit == "B+") my[i].my_credit = 3.5;
		else if (my_credit == "B0") my[i].my_credit = 3.0;
		else if (my_credit == "C+") my[i].my_credit = 2.5;
		else if (my_credit == "C0") my[i].my_credit = 2.0;
		else if (my_credit == "D+") my[i].my_credit = 1.5;
		else if (my_credit == "D0") my[i].my_credit = 1.0;
		else if (my_credit == "F") my[i].my_credit = 0.0;

	}

	for (int i = 0; i < MAX_SUBJECT; i++) 
	{
		if (my[i].pass) continue;
		total_my_credit += my[i].data.credit * my[i].my_credit;
		total_subject_credit += my[i].data.credit;
	}
	cout << fixed;
	cout.precision(6);
	cout << total_my_credit / total_subject_credit;
}