/*
����� �������: ������� ���������
����: 18.10.2019
16.�������� ����� � ����� �����, �������� � ���������?
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int maxNo;
	if ((a > b) && (a > c))
	{
		maxNo = a;
	}
	else if ((b > a) && (b > c))
	{
		maxNo = b;
	}
	else
	{
		maxNo = c;
	}
	cout << maxNo << endl;
	system("pause");
	return 0;
}