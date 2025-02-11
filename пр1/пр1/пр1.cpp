#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a_1 = (10);
	cout << "a_1=" << a_1 << " тип: int, размер 4 бит" << endl;
	short a_2 = (13);
	cout << "a_2=" << a_2 << " тип: short, размер 2 бит" << endl;
	long a_3 = (1000000);
	cout << "a_3=" << a_3 << " тип: long, размер 8 бит" << endl;
	float a_4 = (10.123132f);
	cout << "a_4=" << a_4 << " тип: float, размер 4 бит" << endl;
	double a_5 = (10.18236719872361);
	cout << "a_5=" << a_5 << " тип: double, размер 8 бит" << endl;

	return 0;
}