#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	setlocale(0, "");
	int b = 1;
	cout << "���� WHILE\n\n";
	cout << "������� �����: \n";
	while (b > 0) {
		int a = 1;
		system("cls");
		cout << "���� WHILE\n\n";
		cout << "������� �����: \n";
		cin >> b;
		if (b < 16) {
			while (a < b + 1) {
				Sleep(50);
				cout << "���� ���������. ����: " << a << "\n";
				a++;
			}
			Sleep(100);
		}
		else {
			break;
		}
	}
	int _;
	cin >> _;
}