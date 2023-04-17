#include <iostream>
#include <windows.h>
#include <string>


using namespace std;

int main(){
	setlocale(LC_CTYPE, "ukr");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string login;
	bool agree = false;
	unsigned int password;

	cout << "\t\tРеєстрація кабінету" << endl;

	cout << "Створіть лоґін:" << endl;
	cin >> login;

	cout << "Придумайте пароль:" << endl;
	
	while (true) {
		cin >> password;
		if (cin.fail()) {
			cin.clear();
			cin.ignore();
			cout << "Пароль може містити лише цифри!" << endl;
			continue;
		}
		else break;
	}
	
	
	while (agree != true) {
		cout << "Ви погоджуєтесь з умовами використання?\n1-Так\n0-Ні" << endl;
		cin >> agree;
		if (agree == true) {
			break;
		}
	}
	cout << "Реєстрація пройшла успішно" << endl;
	string login1;
	unsigned int password1;
	cout << "Введіть лоґін:" << endl;
	cin >> login1;
	cout << "Введіть пароль : " << endl;
	cin >> password1;
	if (login == login1 && password == password1) {
		cout << "Авторизація пройшла успішно" << endl;
	}
	else {
		cout << "Помилка входу" << endl;
	}
}