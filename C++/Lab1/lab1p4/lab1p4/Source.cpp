/*
	����� �������: ������� ���������
	����: 11.09.2019
	4.��������� ��������, ���� ��������� �� �������� �������� ������������ ����� n>0.
*/
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, div = 2;
	cout << "���� . . . N = ";
	cin >> n;
	cout << n << " = 1";
	while (n > 1)
	{
		while (n % div == 0)
		{
			cout << " * " << div;
			n = n / div;
		}
		div++;
	}
	cout << endl;
	system("pause");
	return 0;
}