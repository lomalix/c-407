#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Программа - Геометрические фигуры\n[1]Линия\n[2]выход\nВыберите фигуру";
	int num;
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