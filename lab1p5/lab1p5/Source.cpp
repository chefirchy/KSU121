#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "������� �����" << endl;
	cin >> n; int sum = 1;
	for (int i = 1; i<= n; i++) //���� �������� � ���� �� 13-�� ������ �������� ��� "sum *= i+1"
	{
		sum = sum * i;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}