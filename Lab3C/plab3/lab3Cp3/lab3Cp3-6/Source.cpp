/*
�����: ������� ���������
����: 4.10.2019

6.�������� ���������  � ��������� 3.14159 ����� ���������?
7.�������� ����� � ��������� ������ � ����������� �� ��������� ���������
*/
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>

using namespace std;

/*
const long double PI = 3.141592653589793238L
const double PI = 3.141592653589793
const float PI = 3.1415927
*/

const float p = 3.1415927;
float pi = p;

int main()
{
	cout << M_PI << endl; //  �������� �� math.h
	cout << pi << endl; // ����������
	cout << 4 * atan(1) << endl; // �������
	system("pause");
	return 0;
}

/*
8.������ ��� unsigned long int ��'�� ULONG, � long double �� ��� ������.
*/

typedef unsigned long int ULONG;
typedef long double DLONG;
ULONG a = 228;
DLONG b = 1488;

/*
9.�������� ������������� ��� ������ ����, ���� ��� �����, ������ ������� �������, ���� �����, ���� ����'������� ���������, ���� ���.
*/

enum months {January = 1, February, March, April, May, June, July, August, September, October, November, December};
enum days {Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday}; // ISO 8601
enum planets { Mercury = 1, Venus, Earth, Mars, Jupiter, Saturn, Uranus, Neptune};
/* len'
enum currencies {};
enum doctype {};
enum languages {};
*/