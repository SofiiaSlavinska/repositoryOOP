#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "ukr");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	while (true) {
		int x = 0;
		cout << "���� ����� ���� ����� �� �������?(1-7)" << endl;
		cin >> x;

		switch (x) {
		case 1: cout << "�� ��������"<<endl; break;
		case 2: cout << "�� �������"<<endl; break;
		case 3: cout << "�� ������"<<endl; break;
		case 4: cout << "�� ������" << endl; break;
		case 5: cout << "�� �'������" << endl; break;
		case 6: cout << "�� ������" << endl; break;
		case 7: cout << "�� �����" << endl; break;
		default: cout << "����������� ��������" << endl; break;
		}
	}
	return 0;
}