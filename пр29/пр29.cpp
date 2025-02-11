#include <iostream>
#include <time.h>
#include <fstream>
#include<cstring>
#include<cmath>
using namespace std;
void pl(int a,int b) {
	cout << a + b;
}
void mi(int a, int b) {
	cout << a - b;
}
void um(int a, int b) {
	cout << a * b;
}
void de(int a, int b) {
	cout << a / b;
}
void def(int a, int b) {
	cout << a % b;
}
void po(int a, int b) {
	cout << pow(a,b);
}
void sq(int a) {
	cout << sqrt(a);
}
void si(int a) {
	cout << sin(a);
}
void co(int a) {
	cout << cos(a);
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int e = 0;
	int f;
	int g;
	int ag;
	int bg;
	while (e == 0) {
		system("cls");
		cout << "[1]сложить\n[2]вычитать\n[3]умножать\n[4]делить\n[5]делить и показать остаток\n[6]степень\n[7]корень\n[8]синус\n[9]косинус\n[10]выйти";
		cin >> f;
		switch (f) {
		case 1:
			system("cls");
			cin >> ag;
			cin >> bg;
			pl(ag, bg);
			cin >> g;
			break;
		case 2:
			system("cls");
			cin >> ag;
			cin >> bg;
			mi(ag, bg);
			cin >> g;
			break;
		case 3:
			system("cls");
			cin >> ag;
			cin >> bg;
			um(ag, bg);
			cin >> g;
			break;
		case 4:
			system("cls");
			cin >> ag;
			cin >> bg;
			de(ag, bg);
			cin >> g;
			break;
		case 5:
			system("cls");
			cin >> ag;
			cin >> bg;
			def(ag, bg);
			cin >> g;
			break;
		case 6:
			system("cls");
			cin >> bg;
			cin >> ag;
			po(ag,bg);
			cin >> g;
			break;
		case 7:
			system("cls");
			cin >> ag;
			sq(ag);
			cin >> g;
			break;
		case 8:
			system("cls");
			cin >> ag;
			si(ag);
			cin >> g;
			break;
		case 9:
			system("cls");
			cin >> ag;
			co(ag);
			cin >> g;
			break;
		case 10:
			system("cls");
			e == 1;
			break;
		default:
			system("cls");
			cout << "выберите один из вариантов,введите любое чиосло чтобы продолжить";
			cin >> g;
			break;
		}

	}
	cout << "вы вышли из программы";
	return 0;
}