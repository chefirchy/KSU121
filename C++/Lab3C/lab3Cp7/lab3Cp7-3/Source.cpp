/*
����� �������: ������� ���������
����: 05.11.2019
3. �������� ����� for, while, do ... while ��� ����� ����� �� 100 �� 200 ����� 2.
*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	unsigned short int i = 0;
	// system("COLOR 0D");
	for (i=0; i<=200; i+=2) // i=i+2
	{
		SetConsoleTextAttribute(color, 10);
		cout << "<<for>> loop: " << i << endl;
	}

	i = 0;
	while (i <= 200)
	{
		SetConsoleTextAttribute(color, 11);
		cout << "<<while>> loop: " << i << endl;
		i+=2;
	}

	i = 0;
	do
	{
		SetConsoleTextAttribute(color, 12);
		cout << "<<do-while>> loop: " << i << endl;
		i+=2;
	} while (i<=200);

	SetConsoleTextAttribute(color, 7);
	system("pause");
	return 0;
}