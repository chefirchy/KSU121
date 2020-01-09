/*
����� �������: ������� ���������
����: 04.12.2019
1.�������� ���������� ��������� ����� Circle � ���������� �������-������� : ���������� ������ � ����� ( itsX , itsY , itsRadius ) . 
�������� � ���� ����������� �� �������������, ���������� � ������ �������.

2.�������� ��������� ������������ �� �������������, ������������� itsRadius ������ 20, � X � Y - ������ 100.

3.������� ������ �����������, ���� ������ ���������� ������ � ����� �� ��������� � �������� itsX , itsY , itsRadius. 
������� ����� ���� ���� �������� �� ������������� ���� 20.

4.������� ����� �����������, ���� ������� ���������� ������ � ����� � ��������� ��� 
����� �� �� ���������� ������������� ���������� ����� �� ��������� ����� � ���������� �������� itsX , itsY , itsRadius.

5.�������� ����������� ��������� ��� ����� Circle, ���� ���� ��� ���������� ��� ��� ���������.

6.�������� ������������ ������ ��� ���������� ������� ����, ����� ���� � ������ ��� �� ��� ��'���� � ������� itsRadius, ��� � ��� ��������� ������.
*/

#include <iostream>
#include <windows.h>
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std;

#include "Circle.h"


int main()
{
	system("color 02");
	setlocale(LC_ALL, "Rus");

	Circle cr1(3, 4, 5);
	Circle cr2(cr1);
	cout << (cr2).getX() << endl;
	cout << "����������� ����������� ��������." << endl;

	Circle circle1;
	circle1.printCSVtoConsole();
	cout << "�������� 1� �����������." << endl;
	Circle circle2(20, 20);
	cout << "�������� 2� �����������." << endl;
	circle2.printCSVtoConsole();
	Circle circle3(false);
	circle3.printCSVtoConsole();
	cout << "�������� 3� �����������." << endl;
	Circle* circle4 = new Circle("Circle.txt");
	circle4->printCSVtoConsole();
	cout << "�������� 4� �����������." << endl;

	delete circle4;
	circle4 = 0;

	return 0;
}