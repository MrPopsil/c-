#include <iostream>
#include <windows.h>

int main() {
	using namespace std;
	int a = 0;
	cin >> a;
	setlocale(0, "");
	const string RED = "\x1b[91m";
	const string WHITE = "\x1b[0m";
	const string GREEN = "\x1b[92m";
	if (a == 1) {
		cout << GREEN << "����� ���� = ����" << WHITE;
		Sleep(1500);
		system("cls");
	}

	else if (a == 2) {
		cout << GREEN << "����� ���� = ����" << WHITE;
		Sleep(1500);
		system("cls");
	}

	else if (a == 3) {
		cout << GREEN << "����� ���� = �����" << WHITE;
		Sleep(1500);
		system("cls");
	}

	else if (a == 4) {
		cout << GREEN << "����� ���� = �����" << WHITE;
		Sleep(1500);
		system("cls");
	}

	else {
		cout << RED << "������" << WHITE;
		Sleep(1500);
		system("cls");
	}
}