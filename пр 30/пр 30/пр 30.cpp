#include <iostream>
#include <time.h>
using namespace std;
void color(string color, string print, int def);
int main()
{
	setlocale(LC_ALL, "Russian");
	color("red", "print\n", 1);
	color("red", "print", 0);
	return 0;
}
void color(string color, string print, int def) {
	if (def == 0) {
		if (color == "red") {
			color = "\033[0;31m";
		}
		else if (color == "grn") {
			color = "\033[0;32m";
		}
		else if (color == "blu") {
			color = "\033[0;34m";
		}
		else if (color == "yel") {
			color = "\033[0;33m";
		}
		else if (color == "mag") {
			color = "\033[0;35m";
		}
		else if (color == "cyn") {
			color = "\033[0;36m";
		}
	}
	if (def == 1) {
		if (color == "red") {
			color = "\033[4;31m";
		}
		else if (color == "grn") {
			color = "\033[4;32m";
		}
		else if (color == "blu") {
			color = "\033[4;34m";
		}
		else if (color == "yel") {
			color = "\033[4;33m";
		}
		else if (color == "mag") {
			color = "\033[4;35m";
		}
		else if (color == "cyn") {
			color = "\033[4;36m";
		}
	}
	cout << color << print << "\033[0m";
	
}