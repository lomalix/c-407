#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << " [1] лето\n [2] осень\n [3] зима\n [4] весна\n";
	short num;
	cout << "   введите время года:";
	cin >> num;
	if (num == 1) {
		cout << "  время года лето, оденьте шорты и кепку";
	}
	else if (num == 2) {
		cout << "  время года осень, не забудьте дождевик!";
	}
	else if (num == 3) {
		cout << "  время года зима, оденьтесь потеплее";
	}
	else if (num == 4) {
		cout << "  время года весна, радуйтесь жизни";
	}
	else {
		cout << "  введите коректное число";
	}
	return 0;
}