/*
����� �������: ������� ���������
����: 02.12.2019
2. ������� ��'��� ����-����� ����� ������������ ����� ( Cat , Worker , Pencil ...) � �����. ���� ��������� � �������� �� �����. ����� � ����������� �������� ����� ��'���� �� ��������� ��������� �� ���������.
*/

#include <iostream>
#include <windows.h>
using namespace std;

#include "WorkerRaw.h"
int main()
{
	system("color 02");
	setlocale(LC_ALL, "Rus");
	WorkerRaw SteveWhois; // ������ � �����
	WorkerRaw *pSteveWhois = &SteveWhois; // ���������
	WorkerRaw &rSteveWhois = *pSteveWhois; // ������
	// ��������� ��������
	(*pSteveWhois).service = 54;
	rSteveWhois.salary = 300000;
	cout << "��������: " << (*pSteveWhois).salary << '\t' << "���� ������: " << rSteveWhois.service << endl;
	return 0;
}
