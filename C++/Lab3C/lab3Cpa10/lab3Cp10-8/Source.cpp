/*
����� �������: ������� ���������
����: 04.12.2019
8.������� � ���� Circle ���������� � ����������� ��������� ���������� � ����������, �� ��������� ����� �� ����-���� ����� itsRadius.
9.������� � ���� Circle �������� + ��� ��������� ��'���� ���� Circle. ��������� �������� ����� �������� ������ itsRadius.
10.������� � ���� Circle ��������� < � = = ��� ��������� ��'���� ���� Circle �� ��������� ������ itsRadius.
*/

#include <iostream>
#include <windows.h>

using namespace std;

#include "Circle.h"
int main()
{
	system("color 02");
	setlocale(LC_ALL, "ru");

	//8
	Circle c1; // 20, 20, 100
	Circle c2(35, 35, 120); // ����������� �����������?
	Circle c3; // 

	++c1; // 100, 100, 21

	cout << c1.getX() << ' ' << c1.getY() << ' ' << c1.getRadius() << endl;

	c1++; // 100, 100, 22
	c1++; // 100, 100, 23
	--c1; // 100, 100, 22

	cout << c1.getX() << ' ' << c1.getY() << ' ' << c1.getRadius() << endl;

	//9
	c3 = c1+c2;
	cout << c3.getRadius() << endl;
	c3 = c1 - c2;
	cout << c3.getRadius() << endl;

	//10
	bool t1 = c1 < c2;
	bool t2 = c1 == c2;
	cout << t1 << endl << t2;

	return 0;
}