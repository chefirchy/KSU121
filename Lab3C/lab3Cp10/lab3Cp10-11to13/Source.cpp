/*
����� �������: ������� ���������
����: 04.12.2019
11.����� ���� Circle ���, ��� itsX , itsY , itsRadius ������������ � ����� ���'��. ³����������� ������������, ���������� � ������ ����� �����.
12.�������� ����������� ��������� ��� ����� Circle.
13.�������� �������� = ��� ����� Circle.
*/

#include <iostream>
#include <windows.h>

using namespace std;

#include "Circle.h"
int main()
{
	system("color 02");
	setlocale(LC_ALL, "ru");

	Circle cr1(10, 10, 15);
	Circle cr2(cr1);
	cout << (cr2).getX() << ' ' << (cr2).getY() << ' ' << (cr2).getRadius() << endl;
	cout << "����������� ����������� ��������."  << '\n' << endl;

	Circle c1; // 20, 20, 100
	Circle c2(35, 35, 120); // ����������� �����������?

	c1 = c2;
	cout << c1.getX() << ' ' << c1.getY() << ' ' << c1.getRadius() << endl;
	cout << "�������� ���������� ��������." << endl;

	return 0;
}