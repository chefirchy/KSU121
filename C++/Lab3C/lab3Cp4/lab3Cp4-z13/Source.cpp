/*
����� �������: ������� ���������
����: 18.10.2019
13.���� ���� ���������?
	 int a = 1, b = 1, c;
	 if (c = (a - b))
		cout << "c =" << c;
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 1, b = 1, c;
	if (c = (a - b)); // ��� �� ����� ������� � IF ���������� � �������� �� �����
	cout << "c =" << c; // c =0
	system("pause");
	return 0;
}