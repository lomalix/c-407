#include <iostream>
#include <time.h>
using namespace std;
void color(int cld, string print);
void color(int cld, int print);
int main()
{
	setlocale(LC_ALL, "Russian");
	int i = 0;
	int e;
	int f;
	float p1s[3] = { 0 ,0 ,0 };
	float p2s[3] = { 0 ,0 ,0 };
	float ppks[3] = { 0 ,0 ,0 };
	int cl1 = 5;
	int cl2 = 2;
	string name1 = "игрок 1";
	string name2 = "игрок 2";
	char ch1 = '0';
	char ch2 = 'x';
	int e1 = 0;
	int e2 = 0;
	int e3 = 0;
	int hod;
	int e4 = 0;
	int e6 = 0;
	int random;
	int e5 = 0;
	char game[9] = { '1','2','3','4','5','6','7','8','9' };
	while (i == 0) {
		e1 = 0;
		cout << "игра крестики нолики\n\n\n[1]начать игру\n[2]статистика\n[3]настройки\n[4]выйти\n\n\nвыберите:";
		cin >> e;
		switch (e) {
		case 1:
			system("cls");
			while (e3 == 0) {
				system("cls");
				cout << "Крестики нолики\n\n[1]одиночная игра\n[2]два игрока\n[3]назад\n\nВвода:";
				cin >> e;
				system("cls");
				switch (e) {
				case 1:
					e6 = 0;
					while (e6 == 0) {
						for (int i = 0, n = 49; n < 58; n++, i++) {
							game[i] = n;
						}
						for (int g = 0; g < 9; g++) {
							system("cls");
							if (g == 8) {
								cout << "ничья";
								ppks[2]++;
								p1s[2]++;
								cin >> f;
							}
							else {
								system("cls");
								e4 = 0;
								cout << game[0] << " | " << game[1] << " | " << game[2] << endl << "---------" << endl << game[3] << " | " << game[4] << " | " << game[5] << endl << "---------" << endl << game[6] << " | " << game[7] << " | " << game[8] << endl;
								if (g == 0 || g % 2 == 0) {
									cout << "\n\nходит:";
									color(cl1, name1);
									while (e4 == 0) {
										cin >> hod;
										hod--;
										if (game[hod] != ch1 && hod < 9 && hod > -1 && game[hod] != ch2) {
											game[hod] = ch1;
											e4++;
										}
										else {
											cout << "введите другое число";
										}
									}
									if ((game[0] == ch1 && game[1] == ch1 && game[2] == ch1) || (game[3] == ch1 && game[4] == ch1 && game[5] == ch1) || (game[6] == ch1 && game[7] == ch1 && game[8] == ch1) || (game[0] == ch1 && game[3] == ch1 && game[6] == ch1) || (game[1] == ch1 && game[4] == ch1 && game[7] == ch1) || (game[2] == ch1 && game[5] == ch1 && game[8] == ch1) || (game[0] == ch1 && game[4] == ch1 && game[8] == ch1) || (game[2] == ch1 && game[4] == ch1 && game[6] == ch1)) {
										p1s[0]++;
										ppks[1]++;
										g = 9;
										cout << "победил игрок ";
										color(cl1, name1);
									}
								}
								else if (g % 2 == 1) {
									cout << "\n\nходит:";
									color(cl2, "компьютер");
									while (e4 == 0) {
										random = 0 + rand() % 8;
										if (game[random] != ch1 && game[random] != ch2) {
											game[random] = ch2;
											e4++;
										}
										else {
											e4 = 0;
										}
									}
									if ((game[0] == ch2 && game[1] == ch2 && game[2] == ch2) || (game[3] == ch2 && game[4] == ch2 && game[5] == ch2) || (game[6] == ch2 && game[7] == ch2 && game[8] == ch2) || (game[0] == ch2 && game[3] == ch2 && game[6] == ch2) || (game[1] == ch2 && game[4] == ch2 && game[7] == ch2) || (game[2] == ch2 && game[5] == ch2 && game[8] == ch2) || (game[0] == ch2 && game[4] == ch2 && game[8] == ch2) || (game[2] == ch2 && game[4] == ch2 && game[6] == ch2)) {
										ppks[0]++;
										p1s[1]++;
										g = 9;
										cout << "победил компьютер ";
									}
								}
							}
						}
						cout << endl << "[1]выйти\n[2]заново:";
						cin >> e;
						switch (e) {
						case 1:
							e6++;
							break;
						case 2:
							e6 = 0;
							break;
						}
					}
					break;
				case 2:
					e5 = 0;
					while (e5 == 0) {
						for (int i = 0, n = 49; n < 58; n++, i++) {
							game[i] = n;
						}
						for (int g = 0; g < 9; g++) {
							system("cls");
							if (g == 8) {
								cout << "ничья";
								p2s[2]++;
								p1s[2]++;
								cin >> f;
							}
							else {
								system("cls");
								e4 = 0;
								cout << game[0] << " | " << game[1] << " | " << game[2] << endl << "---------" << endl << game[3] << " | " << game[4] << " | " << game[5] << endl << "---------" << endl << game[6] << " | " << game[7] << " | " << game[8] << endl;
								if (g == 0 || g % 2 == 0) {
									cout << "\n\nходит:";
									color(cl1, name1);
									while (e4 == 0) {
										cin >> hod;
										hod--;
										if (game[hod] != ch1 && hod < 9 && hod > -1 && game[hod] != ch2) {
											game[hod] = ch1;
											e4++;
										}
										else {
											cout << "введите другое число";
										}
									}
									if ((game[0] == ch1 && game[1] == ch1 && game[2] == ch1) || (game[3] == ch1 && game[4] == ch1 && game[5] == ch1) || (game[6] == ch1 && game[7] == ch1 && game[8] == ch1) || (game[0] == ch1 && game[3] == ch1 && game[6] == ch1) || (game[1] == ch1 && game[4] == ch1 && game[7] == ch1) || (game[2] == ch1 && game[5] == ch1 && game[8] == ch1) || (game[0] == ch1 && game[4] == ch1 && game[8] == ch1) || (game[2] == ch1 && game[4] == ch1 && game[6] == ch1)) {
										p1s[0]++;
										p2s[1]++;
										g = 9;
										cout << "победил игрок ";
										color(cl1, name1);
									}
								}
								else if (g % 2 == 1) {
									cout << "\n\nходит:";
									color(cl2, name2);
									while (e4 == 0) {
										cin >> hod;
										hod--;
										if (game[hod] != ch1 && hod < 10 && hod > -1 && game[hod] != ch2) {
											game[hod] = ch2;
											e4++;
										}
										else {
											cout << "введите другое число";
										}
									}
									if ((game[0] == ch2 && game[1] == ch2 && game[2] == ch2) || (game[3] == ch2 && game[4] == ch2 && game[5] == ch2) || (game[6] == ch2 && game[7] == ch2 && game[8] == ch2) || (game[0] == ch2 && game[3] == ch2 && game[6] == ch2) || (game[1] == ch2 && game[4] == ch2 && game[7] == ch2) || (game[2] == ch2 && game[5] == ch2 && game[8] == ch2) || (game[0] == ch2 && game[4] == ch2 && game[8] == ch2) || (game[2] == ch2 && game[4] == ch2 && game[6] == ch2)) {
										p2s[0]++;
										p1s[1]++;
										g = 9;
										cout << "победил игрок ";
										color(cl2, name2);
									}
								}
							}
						}
						cout << endl << "[1]выйти\n[2]заново:";
						cin >> e;
						switch (e) {
						case 1:
							e5++;
							break;
						case 2:
							e5 = 0;
							break;
						}
					}
					break;
				case 3:
					system("cls");
					e3 = 1;
					system("cls");
					break;
				default:
					system("cls");
					cout << "выберите один из вариантов, введите число чтобы продолжить";
					cin >> f;
					system("cls");
					break;
				}
			}
			break;
		case 2:
			system("cls");
			cout << "статистика:\n\n";
			color(cl1, "игрок 1: победы:");
			cout << p1s[0];
			color(cl1, "   поражения:");
			cout << p1s[1];
			color(cl1, "   ничьи:");
			cout << p1s[2];
			color(cl1, "   очки:");
			cout << p1s[0] * 5 + p1s[1] * -6 + p1s[2] * -1.2 << endl;
			color(cl2, "игрок 2: победы:");
			cout << p2s[0];
			color(cl2, "   поражения:");
			cout << p2s[1];
			color(cl2, "   ничьи:");
			cout << p2s[2];
			color(cl2, "   очки:");
			cout << p2s[0] * 5 + p2s[1] * -6 + p2s[2] * -1.2 << endl;
			cout << "компьютер: победы:" << ppks[0];
			cout << "   поражения:" << ppks[1];
			cout << "   ничьи:" << ppks[2];
			cout << "   очки:" << ppks[0] * 5 + ppks[1] * -6 + ppks[2] * -1.2;
			cout << "\n\n\n\nвведите число чтобы продолжить";
			cin >> f;
			system("cls");
			break;
		case 3:
			while (e1 == 0) {
				system("cls");
				cout << "настройки\n\n\n[1]игрок 1\n[2]игрок 2\n[3]компьютер\n[4]выйти из настроек\n\n\nВыбор:";
				cin >> e;
				switch (e) {
				case 1:
					e2 = 0;
					while (e2 == 0) {
						system("cls");
						cout << "настройки игрока 1 \n\n\n[1]имя игрока :" << name1 << endl << "[2]игровая фигура:" << ch1 << endl << "[3]цвет игрока:";
						color(cl1, "цвет");
						cout << endl << "[4]выход\n\n\nВыбор:";
						cin >> e;
						switch (e) {
						case 1:
							system("cls");
							cout << "введите имя:";
							cin >> name1;
							break;
						case 2:
							system("cls");
							cout << "введите символ:";
							cin >> ch1;
							break;
						case 3:
							system("cls");
							cout << "введите номер цвета\n1-черный\n2-красный\n3-зеленый\n4-желтый\n5-синий\n6-фиолетовый\n7-голубой\nвыбор:";
							cin >> cl1;
							break;
						case 4:
							system("cls");
							e2 = 1;
							cout << "вы вышли из настроек 1 игрока, введите число чтобы продолжить";
							cin >> f;
							break;
						default:
							system("cls");
							cout << "выберите один из вариантов, введите число чтобы продолжить";
							cin >> f;
							system("cls");
							break;
						}
					}
					system("cls");
					break;
				case 2:
					e2 = 0;
					while (e2 == 0) {
						system("cls");
						cout << "настройки игрока 2 \n\n\n[1]имя игрока :" << name2 << endl << "[2]игровая фигура:" << ch2 << endl << "[3]цвет игрока:";
						color(cl2, "цвет");
						cout << endl << "[4]выход\n\n\nВыбор:";
						cin >> e;
						switch (e) {
						case 1:
							system("cls");
							cout << "введите имя:";
							cin >> name2;
							break;
						case 2:
							system("cls");
							cout << "введите символ:";
							cin >> ch2;
							break;
						case 3:
							system("cls");
							cout << "введите номер цвета\n1-черный\n2-красный\n3-зеленый\n4-желтый\n5-синий\n6-фиолетовый\n7-голубой\nвыбор:";
							cin >> cl2;
							if (cl2 == cl1) {
								cout << "этот цвет занят, случайным образом вам будет выдан другой,введите число для подтверждения";
								while (cl2 == cl1) {
									cl2 = 1 + rand() % 7;
								}
								cin >> f;
							}
							break;
						case 4:
							system("cls");
							e2 = 1;
							break;
						default:
							system("cls");
							cout << "выберите один из вариантов, введите число чтобы продолжить";
							cin >> f;
							system("cls");
							break;
						}
					}
					system("cls");

					break;
				case 3:
					system("cls");
					e2 = 0;
					while (e2 == 0) {
						system("cls");
						cout << "настройки компьютера \n\n\n[1]игровая фигура:" << ch2 << endl << "[2]цвет игрока:";
						color(cl2, "цвет");
						cout << endl << "[3]выход\n\n\nВыбор:";
						cin >> e;
						switch (e) {
						case 1:
							system("cls");
							cout << "введите символ:";
							cin >> ch2;
							break;
						case 2:
							system("cls");
							cout << "введите номер цвета\n1-черный\n2-красный\n3-зеленый\n4-желтый\n5-синий\n6-фиолетовый\n7-голубой\nвыбор:";
							cin >> cl2;
							if (cl2 == cl1) {
								cout << "этот цвет занят, случайным образом вам будет выдан другой,введите число для подтверждения";
								while (cl2 == cl1) {
									cl2 = 1 + rand() % 7;
								}
								cin >> f;
							}
							break;
						case 3:
							system("cls");
							e2 = 1;
							cout << "вы вышли из настроек 1 игрока, введите число чтобы продолжить";
							cin >> f;
							break;
						default:
							system("cls");
							cout << "выберите один из вариантов, введите число чтобы продолжить";
							cin >> f;
							system("cls");
							break;
						}
					}
					break;
				case 4:
					system("cls");
					cout << "вы вышли из настроек, введите число чтобы продолжить";
					cin >> f;
					e1 = 1;
					break;
				default:
					system("cls");
					cout << "выберите один из вариантов, введите число чтобы продолжить";
					cin >> f;
					system("cls");
					break;
				}
			}
			system("cls");
			break;
		case 4:
			system("cls");
			i = 1;
			break;
		default:
			system("cls");
			cout << "выберите один из вариантов, введите число чтобы продолжить";
			cin >> f;
			break;
		}
	}
			switch (i) {
			case 1:
				cout << "вы вышли из игры";
			}
	return 0;
}
void color(int cld, string print) {
	string color;
	switch (cld) {
	case 1:
		color = "\033[0;30m";
		break;
	case 2:
		color = "\033[0;31m";
		break;
	case 3:
		color = "\033[0;32m";
		break;
	case 4:
		color = "\033[0;33m";
		break;
	case 5:
		color = "\033[0;34m";
		break;
	case 6:
		color = "\033[0;35m";
		break;
	case 7:
		color = "\033[0;36m";
		break;
	case 8:
		color = "\033[0;37m";
		break;
	}
	cout << color << print << "\033[0m";
}
void color(int cld, int print) {
	string color;
	switch (cld) {
	case 1:
		color = "\033[0;30m";
		break;
	case 2:
		color = "\033[0;31m";
		break;
	case 3:
		color = "\033[0;32m";
		break;
	case 4:
		color = "\033[0;33m";
		break;
	case 5:
		color = "\033[0;34m";
		break;
	case 6:
		color = "\033[0;35m";
		break;
	case 7:
		color = "\033[0;36m";
		break;
	case 8:
		color = "\033[0;37m";
		break;
	}
	cout << color << print << "\033[0m";
}