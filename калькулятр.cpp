#include <iostream>
#include <windows.h>

int main() {
	using namespace std;
	setlocale(0, "");
	int a = 0;
	int b = 1;
	int c = 1;
	cin >> a;
	const string GREEN = "\x1b[92m";
	const string RED = "\x1b[91m";
	const string WHITE = "\x1b[0m";

	while (b < 10) {
		cout << "[+] ������ ������: " << a << " * " << b << endl;
		cout << "[+] �����: ";
		cin >> c;

		if ((a * b) == c) {
			cout << GREEN << "[+] ������ ����� ���������!" << WHITE;
		}
		else {
			cout << RED << "[-] ������ ����� �������!" << WHITE;
			return 0;
		}
		Sleep(1000);
		system("cls");
		b = b + 1;
	}
	cout << GREEN << "[+] ������� ������, �����������!" << WHITE;
	return 0 ;
}