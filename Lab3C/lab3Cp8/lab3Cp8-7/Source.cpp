/*
����� �������: ������� ���������
����: 01.12.2019
7. �������� ��������, � ��� ����������� ��� ��'���� ���� Employee � ����� ���'��; ��������� �� ��, ����� ������������ ���� � ��������; ����������� �� ��������.
*/

#include <iostream>
#include <windows.h>
using namespace std;
typedef unsigned short USINT;

class Employee
{
public:
	USINT age;
	USINT service;
	float salary;
	Employee(USINT _age = 18, USINT _service = 0, float _salary = 0)
	{
		age = _age;
		service = _service;
		salary = _salary;
	};
	void getinfo()
	{
		cout << "Employee's age is " << age << endl;
		cout << "He's been working here for " << service << " year(s)" << endl;
		cout << "His salary is " << salary << '\n' << endl;
	};
};

int main()
{
	system("color 02");
	Employee* Recruit = new Employee{19, 1, 4500}; //  ���� �� ������ ������ ������?
	Recruit->getinfo(); // ��� ������������� ���������� �������� "." �� "->"?
	delete Recruit; // ������ ��
	Recruit = 0;    // �����?

	Employee* RecruitB = new Employee{ 18, 0, 3200 }; // ������ ������
	RecruitB->getinfo();
	delete RecruitB;
	RecruitB = 0;
	return 0;
}