/*
����� �������: ������� ���������
����: 26.11.2019
4. �������� �������� ��������, � ��� ������������ ���� � �������� �� ����. ����� ������ ������ ����������. �� ��������� ��������� ��������� �������� ���� �����.
5. �� ������ � ���������� �������� ���� ? int * pInt; * pInt = 9; cout << "The value at pInt:" << * pInt;
6. �� ������ � ���������� �������� ���� ? int SomeVariable = 5; int * pVar = & SomeVariable; p Var = 9; cout << "SomeVariable:" << * pVar;
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	system("color 02");
	int jaint;
	int* pJaint = &jaint;
	*pJaint = 2;
	cout << "Adress: " << pJaint << endl;
	cout << "Value: " << jaint << endl;
	return 0;
}

/*
5) int * pInt;                                   //
   * pInt = 9;                                   // ��������� �� ��������, � �� �� ����������
   cout << "The value at pInt:" << * pInt;       //

6) int SomeVariable = 5;                         //
   int * pVar = & SomeVariable;                  //
   p Var = 9;                                    // 1) �������� � ���� ������� ������� 2) "*pVar = 9"
   cout << "SomeVariable:" << * pVar;            // 
*/