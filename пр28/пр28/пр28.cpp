#include <iostream>
#include <time.h>
#include <fstream>
#include<cstring>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int e = 0;
	int e1 = 0;
	int e2 = 0;
	int n;
	int f;
	int i = 1;
	int q;
	int b = 0;
	vector<string> file(i);
	string str1;
	string str2;
	while (e == 0) {
		e1 = 0;
		e2 = 0;

		system("cls");
		cout << "[1]создать файл\n[2]открыть файл\n[3]настройки\n[4]выйти";
		cin >> n;
		switch (n) {
		case 1:
			system("cls");
			i++;
			cout << "вы создали файл введите любую цифру для подтверждения";
			cin >> f;
			break;
		case 2:	
			system("cls");
			for (int k = 1; k <= i ; k++) {
				cout << "файл" << k << endl;
			}
			cin >> b;
			b--;
			if (b >= 0 && b <= i) {
				while (e1 == 0) {
					system("cls");
					cout << file[b];
					cin >> str1;
					if (str1 == "b") {
						file[b].pop_back();
					}
					else {
						while (e2 == 0) {
							cin >> str2;
							if (str2 == "s") {
								e1 = 1;
								file[b].append(str1);
								e2 = 1;
							}
							else {
								cout << endl << "вы не сохранили файл вы уверены что хотите выйти?[s]сохраинть,[q]выйти";
								if (str2 == "s") {
									e1 = 1;
									file[b].append(str1);
									e2 = 1;
								}
								else if (str2 == "q") {
									e1 = 1;
									e2 = 1;
								}
							}
						}
					}
				}
			}
			else {
				cout << "такого файла не существует";
				cin >> f;
				break;
			}
			break;
		case 3:
			system("cls");

			break;
		case 4:
			system("cls");
			e = 1;
			break;
		default:
			system("cls");
			cout << "выберите один из вариантов,введите число чтобы продолжить";
			cin >> f;

			break;
		}
	}
	cout << "вы вышли из программы";
	return 0;
}