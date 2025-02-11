#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float mas[7];
	int en = 0;
	int num;
	int f;
	int fg = 0;
	int ag = 0;
	for (int i = 0; i < 7; i++) {
		cout << "введите число" << i + 1 << ":";
		cin >> mas[i];
	}
	int a = mas[0];
	while (en == 0) {
		system("cls");
		cout << "[+]настройки массива\n[1]сортировка по возрастанию\n[2]сортировка по убыванию\n[3]перемножить массив\n[4]сложить массив\n[5]разделить массив\n[6]обнулить массив\n[7]задать массиву новые значения\n[8]выход\n\n\n\nВвод";
		cin >> num;
		switch (num){
		case 1:
			system("cls");
			while (fg != 10) {
				for (int i = 0; i < 7; i++) {
					if (mas[i] > mas[i + 1] && i + 1 != 7) {
						a = mas[i];
						mas[i] = mas[i + 1];
						mas[i + 1] = a;
					}
				}
				fg++;
			}
			fg = 0;
			for (int j = 0; j < 7; j++) {
					cout << mas[j] << endl;
			}
			cout << "введите любую цифру чтобы продолжить";
			cin >> f;
			break;
		case 2:
			system("cls");
			while (ag != 10) {
				for (int i = 0; i < 7; i++) {
					if (mas[i] < mas[i + 1] && i + 1 != 7) {
						a = mas[i + 1];
						mas[i + 1] = mas[i];
						mas[i] = a;
					}
				}
				ag++;
			}
			ag = 0;
			for (int j = 0; j < 7; j++) {
				cout << mas[j] << endl;
			}
			cout << "введите любую цифру чтобы продолжить";
			cin >> f;
			break;
		case 4:
			system("cls");
			cout << "введите число которое хотите прибавить";
			int pl;
			cin >> pl;
			for (int i = 0; i < 7; i++) {
				mas[i] = mas[i] + pl;
				cout << "число" << i + 1 << "=" << mas[i] << endl;
			}
			cout << "введите любую цифру чтобы продолжить";
			cin >> f;
			break;
		case 3:
			system("cls");
			cout << "выберите число на которое хотите умножить массив";
			int um;
			cin >> um;
			for (int i = 0; i < 7; i++) {
				mas[i] = mas[i] * um;
				cout << "число" << i + 1 << "=" << mas[i] << endl;
			}
			cout << "введите любую цифру чтобы продолжить";
			cin >> f;
			break;
		case 5:
			system("cls");
			cout << "выберите на сколько делить массив";
			int del;
			cin >> del;
			for (int i = 0; i < 7; i++) {
				mas[i] = mas[i] / del;
				cout << "число" << i + 1 << "=" << mas[i] << endl;
			}
			cout << "введите любую цифру чтобы продолжить";
			cin >> f;
			break;
		case 6:
			system("cls");
			for (int i = 0; i < 7; i++) {
				mas[i] = 0;
				cout << "число" << i + 1 << "= 0" << endl;
			}
			cout << "введите любую цифру чтобы продолжить";
			cin >> f;
			break;
		case 7:
			system("cls");
			for (int i = 0; i < 7; i++) {
				cout << "введите число" << i + 1 << ":";
				cin >> mas[i];

			}
			cout << "введите любую цифру чтобы продолжить";
			cin >> f;
			break;
		case 8:
			en = 1;
			break;
		default:
			cout << "выберите один из вариантов";
			cin >> f;
			break;
		}

	}
	switch (en) {
	case 1:
		cout << "вы вышли";
		break;
	}
	return 0;
}