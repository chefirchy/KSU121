/*
����� �������: ������� ���������
����: 18.10.2019
8.����   ���� ���������?
	char ch = '�';
	cout << "ch =" << ch << "int =" << (int) ch;
*/

#include <iostream>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "RUSSIAN");
	char ch = '�';
	cout << "ch =" << ch << "int =" << (int)ch; // ch = � int = -21
	system("pause");
	return 0;
}