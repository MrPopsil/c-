#include <iostream>

int main() {
	setlocale(0, "");
	using namespace std;
	int a;
	cout << "[+] ������� �����: ";
	cin >> a;
	const string GREEN = "\x1b[92m";
	const string RED = "\x1b[91m";
	const string WHITE = "\x1b[0m";

	if (a < 0) {
		cout << RED << "[+] ������! ����� ������ 0!" << WHITE;
	}
	else if (0 <= a and a <= 10) {
		cout << GREEN << "[+] ����� � ���������: 0-10" << WHITE;
	}
	else if (11 <= a and a <= 20) {
		cout << GREEN << "[+] ����� � ���������: 11-20" << WHITE;
	}
	else if (21 <= a and a <= 30) {
		cout << GREEN << "[+] ����� � ���������: 21-30" << WHITE;
	}
	else if (31 <= a and a <= 40) {
		cout << GREEN << "[+] ����� � ���������: 31-40" << WHITE;
	}
	else if (41 <= a and a <= 50) {
		cout << GREEN << "[+] ����� � ���������: 41-50" << WHITE;
	}
	else if (51 <= a and a <= 60) {
		cout << GREEN << "[+] ����� � ���������: 51-60" << WHITE;
	}
	else if (61 <= a and a <= 70) {
		cout << GREEN << "[+] ����� � ���������: 61-70" << WHITE;
	}
	else if (71 <= a and a <= 80) {
		cout << GREEN << "[+] ����� � ���������: 71-80" << WHITE;
	}
	else if (81 <= a and a <= 90) {
		cout << GREEN << "[+] ����� � ���������: 81-90" << WHITE;
	}
	else if (91 <= a and a <= 100) {
		cout << GREEN << "[+] ����� � ���������: 91-100" << WHITE;
	}
	else {
		cout << RED << "[+] ������! ����� ������ 100!" << WHITE;
	}
	return 0;
}