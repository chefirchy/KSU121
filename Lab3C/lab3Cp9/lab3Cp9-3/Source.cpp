/*
����� �������: ������� ���������
����: 02.12.2019
3.������� ��'��� ����-����� ����� ������������ ����� ( Cat , Worker , Pencil ...) � ����� ���'��. ���� ��������� � �������� �� �����. ����� � ����������� �������� ����� ��'���� �� ��������� ��������� �� ���������.
*/

#include <iostream>
#include <windows.h>
using namespace std;

#include "WorkerRaw.cpp"
int main()
{
	system("color 02");
	setlocale(LC_ALL, "Rus");
	WorkerRaw* pSteve = new WorkerRaw;
	WorkerRaw& rSteve = *pSteve;
	//
	if (pSteve == NULL) {
		exit(1);
	}

	(*pSteve).salary = 54000;
	rSteve.service = 27;
	cout << "��������: " << (*pSteve).salary << '\t' << "���� ������: " << rSteve.service << endl;
	return 0;
}