/*
����� �������: ������� ���������
����: 19.11.2019
12. �������� �������� ��� ���������� ������ ������ ���������� �������� �� ����� �� ���������, ��������������= ������� �����.
*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	system("color 02");
	setlocale(LC_ALL, "Russian");
	int powah;
	cout << "������� �������� ����� . . ." << endl;
	bool powchk = true;
	do {
		cin >> powah;
		switch (powah)
		{
		case 25:
			cout << "�������� ���� ������ - 2500 ����� ..." << endl;
			break;
		case 40: case 60:
			cout << "�������� ���� ������ - 1000 ����� ..." << endl;
			break;
		case 75: case 100:
			cout << "�������� ���� ������ - 750 ����� ..." << endl;
			break;
		case 150: case 200:
			cout << "�������� ���� ������ - 500 ����� ..." << endl;
			break;
		default: cout << "�������������� �������� (��): 25, 40, 60, 75, 100, 150, 200 . . ." << endl;
			break;
		} 
		cout << "����������? 1 == ��, 0 == ���" << endl;
		cin >> powchk;
	} while (powchk == true);
	return 0;
}

/*
13 �� ������������ , � �� ������ ����������� � ���������� ���? 
double color = 1; switch ( color ) { case 1: cout << " Black \ n "; case 2: cout << " White \ n "; default : cout << " Other \ n "; }
*/
// double color = 1; // ���������� ���� ������ - int/bool/enum
//switch (color)
//{ // break?? (������� �� ����)
//case 1: cout << " Black \ n "; 
//case 2: cout << " White \ n "; 
//default: cout << " Other \ n ";
//}