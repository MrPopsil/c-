#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int menu;
	int type;
	int size;
	char chtype;
	int x;
	int y;
	cout << "[+] ��������� - \"�������������� ������\"\n\n";
	cout << "[1] �����\n";
	cout << "[2] �������\n";
	cout << "[3] �������������\n";
	cout << "[4] �����������\n";
	cout << "[5] �������\n";
	cout << "[6] �������\n";
	cout << "[7] ����\n";
	cout << "[8] ����\n\n";
	cout << "[+] �������� ������: ";

	cin >> menu;

	if (menu == 1) {
		system("cls");
		cout << "[+] ������: \"�����\"\n\n";
		cout << "[1] ��������������\n";
		cout << "[2] ������������\n\n";
		cout << "[+] �������� ���: ";
		cin >> type;
		if (type == 1) {
			system("cls");
			cout << "[+] ����� �����: ";
			cin >> x;
			cout << "[+] �������� �����: ";
			cin >> chtype;
			while (x > 0) {
				cout << chtype << " ";
				x--;
			}
		}
		else if (type == 2) {
			system("cls");
			cout << "[+] ����� �����: ";
			cin >> x;
			cout << "[+] �������� �����: ";
			cin >> chtype;
			while (x > 0) {
				cout << chtype << "\n";
				x--;
			}
		}
	}
	else if (menu == 2) {
		system("cls");
		cout << "[+] ������: \"�������\"\n\n";
		cout << "[1] �����������\n";
		cout << "[2] ������\n\n";
		cout << "[+] �������� ���: ";
		cin >> type;
		if (type == 1) {
			system("cls");
			cout << "[+] ������ ��������";
			cin >> x;
			cout << "[+] �������� ��������";
			cin >> chtype;
			while (x > 0) {
				while (x > 0) {
					cout << chtype;
					x--;
				}
				cout << "\n";
				x--;
			}
		}
	}

	int _;
	cin >> _;
}