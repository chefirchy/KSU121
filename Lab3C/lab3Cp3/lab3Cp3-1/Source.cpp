/*
	����� �������: ������� ���������
	����: 30.09.2019
    1.����� ���� ���� ���������� ��� ��������� ���� ���������� :
      �� ������               ��������� ����                             ����� ���� � ���������
      ���� ���� ���               ������� �������� �� ��               ³������ ������ �� �
      ���� ������                             ������� � ��.������� � ��.
      �������� � ������������� �� ����, ����� ���� ������� �����.������� �� �����.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	unsigned int age = 27;
	unsigned int cityPopulation = 300000;
	unsigned long long int galaxySQ = 1.024e+83;

	double averageSalaryY = 2400;
	bool Smoker = false;
	string colorFigure = "White";
	float lenghtMM = 36.9;
	float lenghtCM = 3.69;
	cout << age << "\n" << cityPopulation << "\n" << galaxySQ << "\n" << averageSalaryY << "\n";
	if (Smoker) cout << "Yes" << "\n";
	else cout << "No" << "\n";
	cout << colorFigure << "\n" << lenghtMM << "\n" << lenghtCM << "\n";
	system("pause");
	return 0;
}