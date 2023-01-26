
#include <iomanip>
#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(18) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(20) << setfill(c) << c << endl;
	cout << setw(29) << setfill(probel) << probel;
	cout << setw(22) << setfill(c) << c << endl;
	cout << setw(28) << setfill(probel) << probel;
	cout << setw(24) << setfill(c) << c << endl;
	cout << setw(27) << setfill(probel) << probel;
	cout << setw(26) << setfill(c) << c << endl;
	cout << setw(26) << setfill(probel) << probel;
	cout << setw(28) << setfill(c) << c << endl;
	cout << setw(25) << setfill(probel) << probel;
	cout << setw(30) << setfill(c) << c << endl;
}

