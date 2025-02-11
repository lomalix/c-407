#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Программа - Геометрические фигуры\n[1]Линия\n[2]квадрат\n[3]выход\nВыберите фигуру";
	int num;
	int num31;
	int num21;
	int num4;
	char ch1;
	int num5;
	char ch2;
	int num41;
	int num51;
	int num55;
	char ch3 = ' ';
	int num555;
	cin >> num;
	switch (num) {
	case 1:
		system("cls");
		cout << "фигура линия\n\n\n[1]горизонтальная\n[2]вертикальная\nвыберите тип";
		int num1;
		cin >> num1;
		system("cls");
		switch (num1) {
		case 1:
			cout << "выберите длину линии а затеме выберите текстуру линии";
			int num2;
			char ch;
			cin >> num2;
			cin >> ch;
			system("cls");
			while (num2 != 0) {
				cout << ch;
				num2--;
			}
			break;
		case 2:
			cout << "выберите длину линии а затеме выберите текстуру линии";
			int num3;
			char ch1;
			cin >> num3;
			cin >> ch1;
			system("cls");
			while (num3 != 0) {
				cout << ch1 << endl;
				num3--;
			}
			break;
		default: {
			cout << "выберите тип 1 или 2(2)";
			exit;
			break;
		}
		}
	case 2:
		system("cls");
		cout << "фигура квадрат\n\n\n[1]заполненый\n[2]пустой\nвыберите тип";
		int vo;
		cin >> vo;
		system("cls");
		switch (vo) {
		case 1:
			cout << "выберите размер квадрата, а затеме выберите текстуру квадрата";
			cin >> num4;
			cin >> ch1;
		    num31 = num4;
			num21 = num4;
			system("cls");
			while (num4 != 0) {
				num4--;
				while (num31 != 0) {
					cout << ch1;
					num31--;
				}
				num31 = num21;
				cout << endl;
			}
			break;
		case 2:
			cout << "выберите размер квадрата, а затеме выберите текстуру квадрата";
			cin >> num5;
			num55 = num5;
			num555 = num5;
			num41 = num5;
			num51 = num5;
			cin >> ch2;
			system("cls");
			while (num5 != 0) {
				if (num5 == num55 || num5 == 1) {
					while (num555 != 0) {
						cout << ch2;
						num555--;
					}
				}
				else {
					cout << ch2;
					while (num41 != 0) {
						cout << ch3;
						num41--;
					}
					cout << ch2;
				}
				num555 = num51;
				num41 = num51 - 2;
				cout << endl;
				num5--;
			}
			break;
		default: {
			cout << "выберите вариант 1 или 2";
			exit;
			break;
		}
		}
	case 3:
		exit;
		break;
	default: {
		cout << "выберите вариант 1 или 2";
		exit;
		break;
	}
	}
	return 0;
}