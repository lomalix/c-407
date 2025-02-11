#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int num;
	cout << "  введите число от 1 до 100:";
	cin >> num;
	if (num > 0 && num <= 100) {
		if (num >= 91) {
			cout << "число в диапозоне от 91 до 100";
		}
		else if (num >= 81) {
			cout << "число в диапозоне от 81 до 90";
		}
		else if (num >= 71) {
			cout << "число в диапозоне от 71 до 80";
		}
		else if (num >= 61) {
			cout << "число в диапозоне от 61 до 70";
		}
		else if (num >= 51) {
			cout << "число в диапозоне от 51 до 60";
		}
		else if (num >= 41) {
			cout << "число в диапозоне от 41 до 50";
		}
		else if (num >= 31) {
			cout << "число в диапозоне от 31 до 40";
		}
		else if (num >= 21) {
			cout << "число в диапозоне от 21 до 30";
		}
		else if (num >= 81) {
			cout << "число в диапозоне от 11 до 20";
		}
		else if (num >= 1) {
			cout << "число в диапозоне от 1 до 10";
		}
	}
	else {
		cout << "число не подходит";
	}
	return 0;
}