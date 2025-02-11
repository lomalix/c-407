#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Программа - Геометрические фигуры\n[1]Линия\n[2]квадрат\n[3]прямоугольник\n[4]треуольник\n[5]решетка\n[6]крестик\n[7]плюсик\n[8]ромб\n[9]змейка\n[10]рекурсивный квадрат\n[11]выход\nВыберите фигуру";
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
	int numm;
	char ch3 = ' ';
	int num555;
	int num44;
	const int maxSize = 100;
	char grid[maxSize][maxSize];
	int size;
	char texture;
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
			exit;
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
		break;
	case 3:
		system("cls");
		cout << "фигура прямоугольник\n\n\n[1]заполненый\n[2]пустой\nвыберите тип";
		int vo1;
		cin >> vo1;
		system("cls");
		switch (vo1) {
		case 1:
			cout << "выберите размер прямоугольника, его ширину, а затеме выберите текстуру";
			cin >> num4;
			cin >> numm;
			cin >> ch1;
			num31 = numm;
			system("cls");
			while (num4 != 0) {
				num4--;
				while (num31 != 0) {
					cout << ch1;
					num31--;
				}
				num31 = numm;
				cout << endl;
			}
			break;
		case 2:
			cout << "выберите размер прямоугольника, его ширину, а затеме выберите текстуру";
			cin >> num4;
			cin >> numm;
			cin >> ch1;
			num31 = num4;
			num51 = num4;
			system("cls");
			while (num4 != 0) {
				if (num4 == num51 || num4 == 1) {
					while (num31 != 0) {
						cout << ch1;
						num31--;
					}
				}
				else {
					cout << ch1;
					while (num31 - 2 != 0) {
						cout << ch3;
						num31--;
					}
					cout << ch1;
				}
				num4--;
				num31 = num51;
				cout << endl;
			}
			break;
		default: {
			cout << "выберите вариант 1 или 2";
			exit;
			break;
		}
		}
	case 4:
		system("cls");
		cout << "фигура треугольник\n\n\n[1]заполненый\n[2]пустой\nвыберите тип";
		int tr;
		cin >> tr;
		switch (tr) {
		case 1:
			system("cls");
			cout << "выберите размер треугольника, а затеме выберите текстуру треугольника";
			cin >> num31;
			cin >> ch1;
			system("cls");
			for (int y = 0; y < num31; y++) {
				for (int x = 0; x < num31; x++) {
					if (num31 / 2 >= x - y && num31 / 2 <= x + y && num31 / 2 >= y) {
						cout << "\x1b[94m" << ch1 << "\x1b[0m";
					}

					else {
						cout << ch3;
					}
				}
				cout << endl;
			}
			exit;
			break;
		case 2:
			system("cls");
			cout << "выберите размер треугольника, а затеме выберите текстуру треугольника";
			cin >> num31;
			cin >> ch1;
			system("cls");
			for (int y = 0; y < num31; y++) {
				for (int x = 0; x < num31; x++) {
					if (num31 / 2 == x - y || num31 / 2 == x + y || num31 / 2 == y) {
						cout << "\x1b[94m" << ch1 << "\x1b[0m";
					}
					else {
						cout << ch3;
					}
				}    cout << endl;
			}
			exit;
			break;
		default: {
			cout << "выберите вариант 1 или 2";
			exit;
			break;
		}
		}
		exit;
		break;
	case 5:
		system("cls");
		cout << "фигура решетка\nвыберите размер а затем текстуру";
		int re;
		cin >> re;
		cin >> ch1;
		system("cls");
		for (int y = 0; y < re; y++) {
			for (int x = 0; x < re; x++) {
				if (y % 2 == 1) {
					cout << ch1;
				}
				else {
					cout << ch3 << ch1 << ch3;
					x++;
					x++;
				}
			}
			if (y % 2 == 1) {
				cout << ch1;
			}
			cout << endl;
		}
		exit;
		break;
	case 6:
		system("cls");
		cout << "фигура крестик\nвыберите размер а затем текстуру";
		int kr;
		cin >> kr;
		cin >> ch1;
		system("cls"); 
		for (int y = 0; y < kr; y++) {
			for (int x = 0; x < kr; x++) {
				if (kr - 1 == x + y || x == y) {
					cout << ch1;
				}
				else {
					cout << ch3;
				}
			}
			cout << endl;
		}
		exit;
		break;
	case 7:
		system("cls");
		cout << "фигура плюсик\nвыберите размер а затем текстуру";
		int pl;
		cin >> pl;
		cin >> ch1;
		system("cls");
		for (int y = 0; y < pl; y++) {
			for (int x = 0; x < pl; x++) {
				if (pl / 2 == y || pl / 2== x) {
					cout << ch1;
				}
				else {
					cout << ch3;
				}
			}
			cout << endl;
		}
		exit;
		break;
	case 8:
		system("cls");
		cout << "фигура ромб\nвыберите размер а затем текстуру";
		int ro;
		cin >> ro;
		cin >> ch1;
		system("cls");
		for (int y = 0; y < ro; y++) {
			for (int x = 0; x < ro; x++) {
				if (ro / 2 == x + y|| ro / 2 == y - x || ro / 2 == x - y || ro / 2 == y - (ro - x - 1)) {
					cout << ch1;
				}
				else {
					cout << ch3;
				}
			}
			cout << endl;
		}
		exit;
		break;
	case 9:
		system("cls");
		cout << "фигура змейка\nвыберите размер а затем текстуру";
		int zm;
		cin >> zm;
		cin >> ch1;
		system("cls");
		for (int y = 0; y < zm; y++) {
			for (int x = 0; x < zm; x++) {
				if (y % 2 == 0 || (y % 2 == 1 && x == 0 && y % 4 == 1 ) || (y % 2 == 1 && x == zm - 1 && y % 4 != 1)) {
					cout << ch1;
				}
				else {
					cout << ch3;
				}
			}
			cout << endl;
		}
		exit;
		break;
	case 10:
		system("cls");
		cout << "Фигура: \"Рекурсивный квадрат\"" << endl;
		cout << "Размер: ";
		cin >> size;
		cout << "Текстура: ";
		cin >> texture;
		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < size; ++j) {
				grid[i][j] = '.';
			}
		}
		for (int start = 0, end = size - 1; start < end; start += 2, end -= 2) {
			for (int i = start; i <= end; ++i) {
				grid[start][i] = texture;
				grid[end][i] = texture;
			}
			for (int i = start; i <= end; ++i) {
				grid[i][start] = texture;
				grid[i][end] = texture;
			}
		}
		system("cls");
		cout << "[ + ] Результат:" << endl;
		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < size; ++j) {
				cout << setw(2) << grid[i][j];
			}
			cout << endl;
		}
		exit;
		break;
	case 11:
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