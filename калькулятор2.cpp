# include <iostream>

int main() {
	using namespace std;
	setlocale(0, "");
	const string GREEN = "\x1b[92m";
	const string WHITE = "\x1b[0m";
	const string RED = "\x1b[91m";
	int d_1;
	int d_2;
	char c_1;
	cout << "[+] ������� ������ �����: ";
	cin >> d_1;
	cout << "[+] ������� ��������(+;-;*;/;%): ";
	cin >> c_1;
	cout << "[+] ������� ������ �����: ";
	cin >> d_2;
	if (c_1 == '+') {
		cout << GREEN << "[+] ���������: " << WHITE << d_1 << " + " << d_2 << " = " << d_1 + d_2;
	}
	else if (c_1 == '-') {
		cout << GREEN << "[+] ���������: " << WHITE << d_1 << " - " << d_2 << " = " << d_1 - d_2;
	}
	else if (c_1 == '*') {
		cout << GREEN << "[+] ���������: " << WHITE << d_1 << " * " << d_2 << " = " << d_1 * d_2;
	}
	else if (c_1 == '/') {
		if (d_2 == 0) {
			cout << RED << "[+] ������! ����� ������ ������ �� 0!" << WHITE;
		}
		else {
			cout << GREEN << "[+] ���������: " << WHITE << d_1 << " / " << d_2 << " = " << d_1 / d_2;
		}
	}
	else if (c_1 == '%') {
		cout << GREEN << "[+] ���������: " << WHITE << d_1 << " % " << d_2 << " = " << d_1 % d_2;
	}
}