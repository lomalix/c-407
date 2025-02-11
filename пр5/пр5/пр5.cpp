#include <iostream>
using namespace std;
int main()
{
	int num;
	int num_1;
	int num_2;
	int num_3;
	setlocale(LC_ALL, "Russian");
	cout << "1)складывать             | +\n2)вычитать               | -\n3)умножать               | * \n4)делить                 | /\n5)деление от остатка     | %" << endl;
	cin >> num;
	cout << "введите 2 числа" << endl;
	cin >> num_1;
	cin >> num_2;
	if (num == 4 && num_2 == 0) {
		cout << "деление на ноль не возможно";
	}
	else if (num == 1) {
		num_3 = num_1 + num_2;
		cout << num_3;
	}
	else if (num == 2) {
		num_3 = num_1 - num_2;
		cout << num_3;
	}
	else if (num == 3) {
		num_3 = num_1 * num_2;
		cout << num_3;
	}
	else if (num == 4) {
		num_3 = num_1 / num_2;
		cout << num_3;
	}
	else if (num == 5) {
		num_3 = num_1 % num_2;
		cout << num_3;
	}

	return 0;
}