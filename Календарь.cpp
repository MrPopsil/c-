#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	setlocale(0, "");
	int month;
	int day;
	string m;
	cout << "[+] ���������\n\n";
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
	cout << "[+] ������� �����: ";
	cin >> month;
	switch (month) {
	case 1:
		m = "������.";
		break;
	case 2:
		m = "�������.";
		break;
	case 3:
		m = "�����.";
		break;
	case 4:
		m = "������.";
		break;
	case 5:
		m = "���.";
		break;
	case 6:
		m = "����.";
		break;
	case 7:
		m = "����.";
		break;
	case 8:
		m = "�������.";
		break;
	case 9:
		m = "��������.";
		break;
	case 10:
		m = "�������.";
		break;
	case 11:
		m = "������.";
		break;
	case 12:
		m = "�������.";
		break;
	default:
		cout << "[-] ����������� ������ �����!";
		Sleep(2000);
		return 0;
	}
	system("cls");
	cout << "[+] ���������\n\n";
	cout << "[+] ������� ����: ";
	cin >> day;
	switch (day) {
	case 1:
		cout << "[+] ���������: 1 " << m;
		break;
	case 2:
		cout << "[+] ���������: 2 " << m;
		break;
	case 3:
		cout << "[+] ���������: 3 " << m;
		break;
	case 4:
		cout << "[+] ���������: 4 " << m;
		break;
	case 5:
		cout << "[+] ���������: 5 " << m;
		break;
	case 6:
		cout << "[+] ���������: 6 " << m;
		break;
	case 7:
		cout << "[+] ���������: 7 " << m;
		break;
	case 8:
		cout << "[+] ���������: 8 " << m;
		break;
	case 9:
		cout << "[+] ���������: 9 " << m;
		break;
	case 10:
		cout << "[+] ���������: 10 " << m;
		break;
	case 11:
		cout << "[+] ���������: 11 " << m;
		break;
	case 12:
		cout << "[+] ���������: 12 " << m;
		break;
	case 13:
		cout << "[+] ���������: 13 " << m;
		break;
	case 14:
		cout << "[+] ���������: 14 " << m;
		break;
	case 15:
		cout << "[+] ���������: 15 " << m;
		break;
	case 16:
		cout << "[+] ���������: 16 " << m;
		break;
	case 17:
		cout << "[+] ���������: 17 " << m;
		break;
	case 18:
		cout << "[+] ���������: 18 " << m;
		break;
	case 19:
		cout << "[+] ���������: 19 " << m;
		break;
	case 20:
		cout << "[+] ���������: 20 " << m;
		break;
	case 21:
		cout << "[+] ���������: 21 " << m;
		break;
	case 22:
		cout << "[+] ���������: 22 " << m;
		break;
	case 23:
		cout << "[+] ���������: 23 " << m;
		break;
	case 24:
		cout << "[+] ���������: 24 " << m;
		break;
	case 25:
		cout << "[+] ���������: 25 " << m;
		break;
	case 26:
		cout << "[+] ���������: 26 " << m;
		break;
	case 27:
		cout << "[+] ���������: 27 " << m;
		break;
	case 28:
		cout << "[+] ���������: 28 " << m;
		break;
	case 29:
		cout << "[+] ���������: 29 " << m;
		break;
	case 30:
		cout << "[+] ���������: 30 " << m;
		break;
	default:
		cout << "[-] ����������� ������ ����!";
		Sleep(2000);
		return 0;
	}
	int _;
	cin >> _;
}