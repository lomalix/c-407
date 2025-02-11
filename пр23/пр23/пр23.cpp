#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int mass[5];
	for (int i = 0; i < 5; i++) {
		cout << "введите число" << i + 1 << ":";
		cin >> mass[i];
	}
	for (int q = 0; q < 5; q++) {
		cout << "| таблица: " << q + 1 << endl << "-------------------------------\n| Чсло   | пример  | результат|" << endl << "-------------------------------\n|  " << mass[q] << "     |   " << mass[q] << "+" << mass[q] << "   |    "<<mass[q] + mass[q]<<"     | "<< endl << "-------------------------------\n|  " << mass[q] << "     |   " << mass[q] << "-" << mass[q] << "   |    " << mass[q] - mass[q] << "     | " << endl << "-------------------------------\n|  " << mass[q] << "     |   " << mass[q] << "/" << mass[q] << "   |    " << mass[q] / mass[q] << "     | " << endl << "-------------------------------\n|  " << mass[q] << "     |   " << mass[q] << "*" << mass[q] << "   |    " << mass[q] * mass[q] << "     | " << endl << endl << endl;
	}
	return 0;
}