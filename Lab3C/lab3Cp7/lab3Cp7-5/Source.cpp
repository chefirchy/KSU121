/*
����� �������: ������� ���������
����: 05.11.2019
5. �������� �������� ���������� ���� � ����� �����, �� ��������� � ���������:
a) ������� ����� ���������� ��������� � ���������;
b) ���������� ������������ �� ������� ��������.     
*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	char tocontinue;
	//do {
	combobreaker:
		system("color 02");
		int size;
		cout << "Specify the array's reach . . . " << endl;
		cin >> size;
		int * sizeee = new int[size];
		int sum = 0;
		int multiplier = 1;
		for (int i = 1; i < size + 1; i++)
		{
			cin >> sizeee[i];
			cout << "-> " << sizeee[i] << endl;
		}
		for (int i = 1; i < size + 1; i++)
		{
			sum += sizeee[i];
		}
		for (int i = 1; i < size + 1; i++)
		{
			multiplier *= sizeee[i];
		}
		cout << "Sum: " << sum << " Composition: " << multiplier << endl;

		cout << "Continue? Y/N" << endl;
		cin >> tocontinue;
		if (tocontinue == 'Y')
			goto combobreaker;
		else
			//} while (tocontinue == 'Y');
    // delete [] sizeee;
	return 0;
}

/*
6. �� ������ � ���������� ��� ? int counter = 0; while (counter <10) { cout << "counter:" << counter; }
7. �� ������ � ���������� ���? for (int counter = 0; counter <10; conter ++); cout << "count er:" << counter;
8.  �� ������ � ���������� ��� ? int counter = 100; while (counter <10) { cout << "counter:" << counter; counter--; }
*/

// 6. GER (endless loop)
// 7. ��� ��������
// 8. �������������� �������