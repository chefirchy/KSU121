/*
����� �������: ������� ���������
����: 03.12.2019
8. �������� �������, ��� ������� ��'��� ����-����� ����� ������������ ����� ( Cat , Worker , Pencil ...) 
� ������� ���'�� � ������� � ����� ���������� ��������� �� ��'���. �������� ��.
*/

#include <iostream>
#include <windows.h>
using namespace std;

#include "WorkerRaw.cpp"

WorkerRaw& func(WorkerRaw a);

int main()
{
	system("color 02");
	WorkerRaw v;
	v.age = 25;
	v.service = 7;
	v.salary = 52000;
	cout << v.age << '\n' << v.service << '\n' << v.salary << endl;
	return 0;
}

WorkerRaw& func()
{
	WorkerRaw* Woke = new WorkerRaw;
	//
	if (Woke == NULL)
	{
		exit(1);
	}

	WorkerRaw& rWoke = *Woke;
	return rWoke;
}