/*
����� �������: ������� ���������
����: 30.09.2019
3.�������� ����, �������� ��� ��������� ��������� ��������� ��� �����������: ��������� �����, �������, �����, ��, ����, ������ �� �, ������� ������ � �������������� ��. ����������� ��� �� �����. ������ ��� �������� � ��������� � ����� �����������.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int TabelNo;
	string surname;
	string sex;
	int age;
	int weight;
	bool smoker;
	int TarifStavka;
	// ������ ��������
	TabelNo = 22814880;
	surname = "��������";
	sex = "�������";
	age = 54;
	weight = 96;
	smoker = true;
	TarifStavka = 54000;
	// �������
	cout << "��������� ����� - �" << TabelNo << endl;
	cout << "������� - " << surname << endl;
	cout << "��� - " << sex << endl;
	cout << "������� - " << age << endl;
	cout << "��� - " << weight << endl;
	if (smoker) cout << "��������� - ��" << "\n";
	else cout << "��������� - ���" << "\n";
	cout << "����� - " << TarifStavka << endl;
	// ?
	system("pause");
	return 0;
}