#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "ukr");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	while (true) {
		int x = 0;
		cout << "який зараз день тижн€ по пор€дку?(1-7)" << endl;
		cin >> x;

		switch (x) {
		case 1: cout << "÷е понед≥лок"<<endl; break;
		case 2: cout << "÷е в≥второк"<<endl; break;
		case 3: cout << "÷е середа"<<endl; break;
		case 4: cout << "÷е четвер" << endl; break;
		case 5: cout << "÷е п'€тниц€" << endl; break;
		case 6: cout << "÷е субота" << endl; break;
		case 7: cout << "÷е нед≥л€" << endl; break;
		default: cout << "Ќеправильне значенн€" << endl; break;
		}
	}
	return 0;
}