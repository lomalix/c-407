#include <iostream>
#include <time.h>
#include <fstream>
#include<cstring>
#include<cmath>
using namespace std;
void color(int a);
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int e = 0;
	int q;
	int a;
	int f;
	int fg = 0;
	int k = 0;
	int mas[12]{};
	int mmas[3][4];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			mmas[i][j]= 1 + rand() % 50;
	}
	while (e == 0) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 4; j++) {
				mas[k] = mmas[i][j];
				k++;
			}
		}
		k = 0;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 4; j++) {
				color(mmas[i][j]);
				cout <<",";
			}
			cout << endl;
		}
		cout << "[1]по убыванию\n[2]по возрастанию\n[3]выход";
		cin >> a;
		switch (a) {
		case 1:
			system("cls");
			while (fg != 20) {
				for (int i = 0; i < 12; i++) {
					if (mas[i] < mas[i + 1] && i + 1 != 12) {
						a = mas[i];
						mas[i] = mas[i + 1];
						mas[i + 1] = a;
					}
				}
				fg++;
			}
			fg = 0;
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 4; j++) {
					mmas[i][j] = mas[k];
					k++;
				}
			}
			k = 0;
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 4; j++) {
					color(mmas[i][j]);
					cout << ",";
				}
				cout << endl;
			}
			cin >> f;
			system("cls");
			break;
		case 2:
			system("cls");
			while (fg != 20) {
				for (int i = 0; i < 12; i++) {
					if (mas[i] > mas[i + 1] && i + 1 != 12) {
						a = mas[i];
						mas[i] = mas[i + 1];
						mas[i + 1] = a;
					}
				}
				fg++;
			}
			fg = 0;
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 4; j++) {
					mmas[i][j] = mas[k];
					k++;
				}
			}
			k = 0;
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 4; j++) {
					color(mmas[i][j]);
					cout << ",";
				}
				cout << endl;
			}
			cin >> f;
			system("cls");
			break;
		case 3:
			system("cls");
			e = 1;
			break;
		default:
			system("cls");
			cout << "выберите один из вариантов,введите любое число чтобы продолжить";
			cin >> f;
			break;
		}
	}
	cout << "вы вышли из программы";
	return 0;
}
void color(int a) {
	if (a >= 0 && a <= 9) {
		cout << a;
	}
	else if (a >= 10 && a <= 19) {
		cout << "\033[0;32m" << a << "\033[0m";
	}
	else if (a >= 20 && a <= 29) {
		cout << "\033[0;34m" << a << "\033[0m";
	}
	else if (a >= 30 && a <= 39) {
		cout << "\033[0;31m" << a << "\033[0m";
	}
	else if (a >= 40 && a <= 50) {
		cout << "\033[0;33m" << a << "\033[0m";
	}
}