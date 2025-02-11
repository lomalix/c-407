#include <iostream>
#include <time.h>
#include <fstream>
#include<cstring>
#include<cmath>
#include<vector>
#include<Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a = 0;
	int a1;
	int a2=0;
	char str;
	while (a==0) {
		system("cls");
		cout << "[1]шифровка\n[2]дешифровка\n[3]выход";
		cin >> a1;
		a2 = 0;
		switch (a1) {
		case 1:
			while (a2==0) {
				cout << "введите текст:";
				cin >> str;
				vector<char>mas;
				mas.push_back(str);
				system("cls");//гдето тут ошибка
				vector<int>sh;
				for (int i = 0; i < size(mas); i++) {
					sh[i] =static_cast<char>(mas[i]);//гдето тут ошибка
				}
				for (int i = 0; i < size(sh); i++) {
					sh[i] = (((sh[i] * 4) - 10) / 13) + 40;
				}
				for (int i = 0; i < size(mas); i++) {
					mas[i] = static_cast<int>(sh[i]);
					cout << mas[i];
				}
				cout << endl << "скопируйте и введите любое число чтобы вернуться назад:";
				cin >> a1;
				a2 = 1;
			}
		case 2:
			while (a2 == 0) {
				cout << "введите текст:";
				cin >> str;
				vector<char>mas;
				mas.push_back(str);
				system("cls");//гдето тут ошибка
				vector<int>sh;
				for (int i = 0; i < size(mas); i++) {
					sh[i] = static_cast<char>(mas[i]);//гдето тут ошибка
				}
				for (int i = 0; i < size(sh); i++) {
					sh[i] = (((sh[i] - 40) * 13) + 10) / 4;
				}
				for (int i = 0; i < size(mas); i++) {
					mas[i] = static_cast<int>(sh[i]);
					cout << mas[i];
				}
				cout << endl << "вот ваша дешифровка введите любое число чтобы вернуться назад:";
				cin >> a1;
				a2 = 1;
			}
		case 3:
			a = 1;
		default:
			cout << "введите один из вариантов, введите любое число чтобы продолжить:";
			cin >> a1;
		}
	}
	system("cls");
	cout << "досвидания";
	return 0;
}