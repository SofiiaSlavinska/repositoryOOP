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

	cout << "\t\t��������� �������" << endl;

	cout << "������� ��:" << endl;
	cin >> login;

	cout << "���������� ������:" << endl;
	
	while (true) {
		cin >> password;
		if (cin.fail()) {
			cin.clear();
			cin.ignore();
			cout << "������ ���� ������ ���� �����!" << endl;
			continue;
		}
		else break;
	}
	
	
	while (agree != true) {
		cout << "�� ����������� � ������� ������������?\n1-���\n0-ͳ" << endl;
		cin >> agree;
		if (agree == true) {
			break;
		}
	}
	cout << "��������� ������� ������" << endl;
	string login1;
	unsigned int password1;
	cout << "������ ��:" << endl;
	cin >> login1;
	cout << "������ ������ : " << endl;
	cin >> password1;
	if (login == login1 && password == password1) {
		cout << "����������� ������� ������" << endl;
	}
	else {
		cout << "������� �����" << endl;
	}
}