#include <iostream>
#include <windows.h>
#include <string>



using namespace std;

class Sys {
private: unsigned int password = 1234;
	   
public: 
	string login = "sonyaslav";
	bool agree = false;
	  void SetPassword(unsigned int P) {
		  password = P;
	  }
	  unsigned int GetPassword() {
		  return password;
	  }
};

namespace Aut {
	static unsigned int attempts = 0;
	static unsigned int parole = 0;
}

int main(void) {
	setlocale(LC_CTYPE, "ukr");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Sys s;

	cout << "\t\t���� �� �������" << endl;

	while (true) {
		cout << "������ ��:" << endl;
		string login1;
		cin >> login1;

		cout << "������ ������:" << endl;
		unsigned int password1;
		while (true) {
			cin >> password1;
			if (cin.fail()) {
				cin.clear();
				cin.ignore();
				cout << "������ ���� ������ ���� �����!" << endl;
				Aut::attempts++;
				Aut::parole++;
				continue;
			}
			else break;
		}

		if (s.GetPassword() == password1 && login1 == s.login) {
			while (s.agree != true) {
				cout << "�� ����������� � ������� ������������?\n1-���\n0-ͳ" << endl;
				cin >> s.agree;
				if (s.agree == true) {
					break;
				}
				else{ 
					Aut::attempts++;
					cout << "���� �� ��������" << endl; }
			}
			cout << "ʳ������ �������� ����� ����� ������:" << Aut::parole << endl;
			cout << "ʳ������ ��������� �������� �����:" << Aut::attempts<<endl;
			cout << "���� �������";
			break;
		}
		else { 
			Aut::attempts++;
			cout << "���� �� ��������"<<endl; }
	}
}