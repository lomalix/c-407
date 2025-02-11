#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "введите число";
    while (0 < 1) {
        int wh = 1;
        int num;
        cin >> num;
        if (num <= 15 && num > 0) {
            while (num + 1 > wh) {
                cout << "цикл отработал" << wh << "круг" << endl;
                wh++;
            }
        }
        else if (num > 15 || num < 0) {
            cout << "введите число от 1 до 15";
        }
        else if (num == 0)
            break;
    }
    return 0;
}