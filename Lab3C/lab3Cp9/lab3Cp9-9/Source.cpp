/*
����� �������: ������� ���������
����: 03.12.2019
9. �������� �������, ��� ������� ��'��� ����-����� ����� ������������ ����� ( Cat , Worker , Pencil ...)
� ������� ���'�� � ������� � ����� ���������� ������ ��'����. �������� ��.
*/

#include <iostream>
#include <windows.h>
using namespace std;

#include "WorkerRaw.cpp"

int func();

int main()
{
	system("color 02");
	cout << func() << endl;
	return 0;
}
int func()
{
	WorkerRaw* Woke = new WorkerRaw;
	//
	if (Woke == NULL)
	{
		exit(1);
	}

	WorkerRaw& rWoke = *Woke;
	return (int)&rWoke; // ����� �����
}