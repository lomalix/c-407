#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int massi[10]{ 0 , 1 , 2, 3 , 4, 5, 6, 7 , 8, 9 };
	for (int i = 0; i < 10; i++) {
			cout << massi[i] << endl;
	}
	cout << "введите число чтобы перейти к следующему масиву";
	int p1;
	cin >> p1;
	system("cls");
	short masss[10]{ 15 , 16 , 27, 33 , 48, 52, 64, 75 , 867, 921 };
	for (int i = 0; i < 10; i++) {
		cout << masss[i] << endl;
	}
	cout << "введите число чтобы перейти к следующему масиву";
	cin >> p1;
	system("cls");
	long massl[10]{ 0 , 1234 , 23425, 31234 , 412344, 56345, 66578, 76798 , 88790, 9123 };
	for (int i = 0; i < 10; i++) {
		cout << massl[i] << endl;
	}
	cout << "введите число чтобы перейти к следующему масиву";
	cin >> p1;
	system("cls");
	float massf[10]{ 0.123f , 1.234f , 2.5647f, 3.112f , 4.1234f , 5.12f, 6.34f, 7.1234f , 8.1243f, 9.4576f };
	for (int i = 0; i < 10; i++) {
		cout << massf[i] << endl;
	}
	cout << "введите число чтобы перейти к следующему масиву";
	cin >> p1;
	system("cls");
	double massd[10]{ 0.123 , 1.234 , 2.5647, 3.432432 , 4.45645, 5.678, 6.768976, 7.1234 , 8.1234, 9.2345 };
	for (int i = 0; i < 10; i++) {
		cout << massd[i] << endl;
	}
	cout << "введите число чтобы перейти к следующему масиву";
	cin >> p1;
	system("cls");
	char massc[10]{ 'q' , 'd' , 'e', 't' , 'y', 'i', 'c', 'a' , 'f', 'm'};
	for (int i = 0; i < 10; i++) {
		cout << massc[i] << endl;
	}
	cout << "введите число чтобы перейти к следующему масиву";
	cin >> p1;
	system("cls");
    bool massb[10]{ 0 , 1 , 0, 0 , 0, 0, 1, 1 , 1, 0 };
	for (int i = 0; i < 10; i++) {
		cout << massb[i] << endl;
	}
	cout << "введите число чтобы перейти к следующему масиву";
	cin >> p1;
	system("cls");
	string massst[10]{ "FG" , "WERTET" , "KOLOTIT", "I NI CHEGO" , "NE", "ZAPLOTIT", "A I", "IDU" , "VESELYI", "PO MOCKVE"};
	for (int i = 0; i < 10; i++) {
		cout << massst[i] << endl;
	}
	cout << "введите число чтобы перейти к следующему масиву";
	cin >> p1;
	system("cls");
	return 0;
}