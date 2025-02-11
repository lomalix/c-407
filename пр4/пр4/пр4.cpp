#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int num;
	int num_1;
	int num_2;
	int num_3;
	int num_4;
	int num_5;
	int num_6;
	int num_7;
	int num_8;
	int num_9;
	int num_10;
	cout << "введите число";
	cin >> num;
	//ниже ктрл с
	cout << "решите пример " << num << " * 1" << endl;
	cout << "ответ:";
	cin >> num_1;
	if (num_1 == num * 1) {
		cout << "правильно, дальше " << endl;
	}
	else {
		cout << "не правильно";
		exit(0);
	}
	//выше ктрл
	cout << "решите пример " << num << " * 2" << endl;
	cout << "ответ:";
	cin >> num_2;
	if (num_2 == num * 2) {
		cout << "правильно, дальше " << endl;
	}
	else {
		cout << "не правильно";
		exit(0);
	}
	cout << "решите пример " << num << " * 3" << endl;
	cout << "ответ:";
	cin >> num_3;
	if (num_3 == num * 3) {
		cout << "правильно, дальше " << endl;
	}
	else {
		cout << "не правильно";
		exit(0);
	}
	cout << "решите пример " << num << " * 4" << endl;
	cout << "ответ:";
	cin >> num_4;
	if (num_4 == num * 4) {
		cout << "правильно, дальше " << endl;
	}
	else {
		cout << "не правильно";
		exit(0);
	}
	cout << "решите пример " << num << " * 5" << endl;
	cout << "ответ:";
	cin >> num_5;
	if (num_5 == num * 5) {
		cout << "правильно, дальше " << endl;
	}
	else {
		cout << "не правильно";
		exit(0);
	}
	cout << "решите пример " << num << " * 6" << endl;
	cout << "ответ:";
	cin >> num_6;
	if (num_6 == num * 6) {
		cout << "правильно, дальше " << endl;
	}
	else {
		cout << "не правильно";
		exit(0);
	}
	cout << "решите пример " << num << " * 7" << endl;
	cout << "ответ:";
	cin >> num_7;
	if (num_7 == num * 7) {
		cout << "правильно, дальше " << endl;
	}
	else {
		cout << "не правильно";
		exit(0);
	}
	cout << "решите пример " << num << " * 8" << endl;
	cout << "ответ:";
	cin >> num_8;
	if (num_8 == num * 8) {
		cout << "правильно, дальше " << endl;
	}
	else {
		cout << "не правильно";
		exit(0);
	}
	cout << "решите пример " << num << " * 9" << endl;
	cout << "ответ:";
	cin >> num_9;
	if (num_9 == num * 9) {
		cout << "правильно, дальше " << endl;
	}
	else {
		cout << "не правильно";
		exit(0);
	}
	cout << "решите пример " << num << " * 10" << endl;
	cout << "ответ:";
	cin >> num_10;
	if (num_10 == num * 10) {
		cout << "правильно, дальше " << endl;
	}
	else {
		cout << "не правильно";
		exit(0);
	}
	return 0;
}