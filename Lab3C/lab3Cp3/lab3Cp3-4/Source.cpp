/*
����� �������: ������� ���������
����: 4.10.2019
4.����� �������� 3. ���, ��� � �� ����������� ������� ��� ���� �����������.
5.�������� ������� � ����������� ��� ���������� ��������� ��� ����������� �� �����. �������� �� ��� ������� �� �����������.
*/
#include <iostream>
#include <string>
using namespace std;

struct Slave
{
	int TabelNo;
	string surname;
	string sex;
	int age;
	int weight;
	string smoker; // bool ������
	int TarifStavka;
};

void PrintInfo(Slave s)
{
	cout << "��������� ����� - �" << s.TabelNo << endl << "������� - " << s.surname << endl << "��� - " << s.sex << endl << "������� - " << s.age << endl << "��� - " << s.weight << endl << "��������� - " << s.smoker << endl << "����� - " << s.TarifStavka << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	Slave nibba1;
	nibba1.TabelNo = 22814880;
	nibba1.surname = "��������";
	nibba1.sex = "�������";
	nibba1.age = 54;
	nibba1.weight = 96;
	nibba1.smoker = "��";
	nibba1.TarifStavka = 54000;
	Slave nibba2;
	nibba2.TabelNo = 13371488;
	nibba2.surname = "�����";
	nibba2.sex = "�������";
	nibba2.age = 30;
	nibba2.weight = 69;
	nibba2.smoker = "��";
	nibba2.TarifStavka = 27000;

	PrintInfo(nibba1);
	cout << endl;
	PrintInfo(nibba2);
	cout << endl;
	system("pause");
	return 0;
}