#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "[+] ������ ����\n\n";
	cout << "[1] ������\n";
	cout << "[2] �������\n";
	cout << "[3] ����\n";
	cout << "[4] ������\n";
	cout << "[5] ���\n";
	cout << "[6] ����\n";
	cout << "[7] ����\n";
	cout << "[8] ������\n";
	cout << "[9] ��������\n";
	cout << "[10] �������\n";
	cout << "[11] ������\n";
	cout << "[12] �������\n\n";
	cout << "[+] �������� �����: ";
	int month;
	cin >> month;
	switch (month) {
	case 1:
		system("cls");
		cout << "[+] ������ ����� \"������\"";
		break;
	case 2:
		system("cls");
		cout << "[+] ������ ����� \"�������\"";
		break;
	case 3:
		system("cls");
		cout << "[+] ������ �����\"����\"";
		break;
	case 4:
		system("cls");
		cout << "[+] ������ �����\"������\"";
		break;
	case 5:
		system("cls");
		cout << "[+] ������ �����\"���\"";
		break;
	case 6:
		system("cls");
		cout << "[+] ������ �����\"����\"";
		break;
	case 7:
		system("cls");
		cout << "[+] ������ �����\"����\"";
		break;
	case 8:
		system("cls");
		cout << "[+] ������ �����\"������\"";
		break;
	case 9:
		system("cls");
		cout << "[+] ������ �����\"��������\"";
		break;
	case 10:
		system("cls");
		cout << "[+] ������ �����\"�������\"";
		break;
	case 11:
		system("cls");
		cout << "[+] ������ �����\"������\"";
		break;
	case 12:
		system("cls");
		cout << "[+] ������ �����\"�������\"";
		break;
	default:
		system("cls");
		cout << "[-] ����������� ����� ����� ������!";
	}
	int _;
	cin >> _;
}