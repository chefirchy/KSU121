/*
����� �������: ������� ���������
����: 23.10.2019
7.	�������� �������� ������ ��� ��������� �������� �� ������ (����, �����, ������, �������, ��������) � �񳺿 ������. ������������� �� �������� ������ �����. �������� �������� �������� ������ , ��������� ��������� ����� . ��������� �������� �񳺿 ������, �������� ������������ �����. �������� ������� �������� ������ � �񳺿 ������. �������� ���� ����� ������: ���� ��� �����, ��������� ��������� �����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char cityfat[] = "����� ", districtfat[] = "����� ", streetfat[] = "����� ", housefat[] = "��� ", flatfat[] = "�������� ", adressfat[1000]="";
	strcat(adressfat, cityfat);
	strcat(adressfat, districtfat);
	strcat(adressfat, streetfat);
	strcat(adressfat, housefat);
	strcat(adressfat, flatfat);
	cout << adressfat;
	system("pause");
	return 0;
}