#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int num;
	int num2 = 0;
	int num3 = 5;
	cout << "[1]Начать игру\n[2]выйти" << endl;
	cin >> num;
	switch (num) {
	case 1:
		while (num3 > 0 && num2 < 3) {
			int random1 = 1 + rand() % 10;
			int random2 = 1 + rand() % 10;
			int random3 = 1 + rand() % 10;
			if (random1 == random2 || random1 == random3 || random2 == random3) {
				while (random1 == random2 || random1 == random3 || random2 == random3) {
					if (random1 == random2) {
						while (random1 == random2) {
							random1 = 1 + rand() % 10;
						}
					}
					else if (random3 == random2) {
						while (random3 == random2) {
							random2 = 1 + rand() % 10;
						}
					}
					else if (random1 == random3) {
						while (random1 == random3) {
							random3 = 1 + rand() % 10;
						}
					}

				}
			}
			int num4;
			cout << "угаданных чисел[" << num2 << "/3]\nПопыток:[" << num3 << "]" << endl;
			cout << "угодайте число:" << endl;
			cin >> num4;
			if (num4 == random1 || num4 == random2 || num4 == random3) {
				num2++;
				cout << "вы угадали число" << endl;
			}
			else if (num4 < 0 || num4 > 10) {
				cout << "нужно ввести число от 0 до 10";
			}
			else if (num2 == 3) {
				cout << "вы победили";
			}
			else {
				num3--;
				cout << "вы не угодали чило" << endl;
			}
			if (num3 == 0) {
				cout << "вы проиграли";
			}
		}
		break;
	case 2:
		exit;
		break;
	default:
		cout << " пожалуйста выберите пункт 1 или 2";

	}
	return 0;
}