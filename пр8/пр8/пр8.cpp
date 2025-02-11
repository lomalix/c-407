#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int num;
	cout << "переводчик\n\n[1]руские слова\n[2]англиские слова\n\n[3]выйти" << endl;
	cin >> num;
	switch (num) {
	case 1:
		int num1;
		cout << "переводчик'список русских слов'\n[1]дорога\n[2]дом\n[3]работа\n[4]номер\n[5]хлеб\n[6]чеснок\n[7]машина\n[8]полицейский\n[9]макароны\n[10]хорошо\n[11]переводчик\n[12]музей\n[13]еда\n[14]нога\n[15]пиво\nвыберите слово:" << endl;
		cin >> num1;
		switch (num1) {
		case 1:
			cout << "дорога-road";
			break;
		case 2:
			cout << "дом-house";
			break;
		case 3:
			cout << "работа-work";
			break;
		case 4:
			cout << "номер-Number";
			break;
		case 5:
			cout << "хлеб-bread";
			break;
		case 6:
			cout << "чеснок-garlic";
			break;
		case 7:
			cout << "машина-car";
			break;
		case 8:
			cout << "полицейский-policeman";
			break;
		case 9:
			cout << "макароны-pasta";
			break;
		case 10:
			cout << "хорошо-good";
			break;
		case 11:
			cout << "переводчик-interpreter";
			break;
		case 12:
			cout << "музей-the museum";
			break;
		case 13:
			cout << "еда-meal";
			break;
		case 14:
			cout << "нога-leg";
			break;
		case 15:
			cout << "пиво-beer";
			break;
		default:
			cout << "такого слова нет";
			exit;
		break;
		}
		break;
	case 2:
		int num2;
		cout << "переводчик'список английских слов'\n[1]road\n[2]house\n[3]work\n[4]Number\n[5]bread\n[6]garlic\n[7]car\n[8]policeman\n[9]pasta\n[10]good\n[11]interpreter\n[12]museum\n[13]meal\n[14]leg\n[15]beer\nвыберите слово:" << endl;
		cin >> num2;
		switch (num2) {
		case 1:
			cout << "дорога-road";
			break;
		case 2:
			cout << "дом-house";
			break;
		case 3:
			cout << "работа-work";
			break;
		case 4:
			cout << "номер-Number";
			break;
		case 5:
			cout << "хлеб-bread";
			break;
		case 6:
			cout << "чеснок-garlic";
			break;
		case 7:
			cout << "машина-car";
			break;
		case 8:
			cout << "полицейский-policeman";
			break;
		case 9:
			cout << "макароны-pasta";
			break;
		case 10:
			cout << "хорошо-good";
			break;
		case 11:
			cout << "переводчик-interpreter";
			break;
		case 12:
			cout << "музей-the museum";
			break;
		case 13:
			cout << "еда-meal";
			break;
		case 14:
			cout << "нога-leg";
			break;
		case 15:
			cout << "пиво-beer";
			break;
		default:
			cout << "такого слова нет";
			exit;
			break;
		}
		break;
	case 3:
		exit;
		break;
	default:
		cout << "введено не коректное число";
	}
	return 0;
}