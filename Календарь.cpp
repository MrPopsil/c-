#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	setlocale(0, "");
	int month;
	int day;
	string m;
	cout << "[+] Календарь\n\n";
	cout << "[1] Январь\n";
	cout << "[2] Февраль\n";
	cout << "[3] Март\n";
	cout << "[4] Апрель\n";
	cout << "[5] Май\n";
	cout << "[6] Июнь\n";
	cout << "[7] Июль\n";
	cout << "[8] Август\n";
	cout << "[9] Сентябрь\n";
	cout << "[10] Октябрь\n";
	cout << "[11] Ноябрь\n";
	cout << "[12] Декабрь\n\n";
	cout << "[+] Укажите месяц: ";
	cin >> month;
	switch (month) {
	case 1:
		m = "января.";
		break;
	case 2:
		m = "февраля.";
		break;
	case 3:
		m = "марта.";
		break;
	case 4:
		m = "апреля.";
		break;
	case 5:
		m = "мая.";
		break;
	case 6:
		m = "июня.";
		break;
	case 7:
		m = "июля.";
		break;
	case 8:
		m = "августа.";
		break;
	case 9:
		m = "сентября.";
		break;
	case 10:
		m = "октября.";
		break;
	case 11:
		m = "ноября.";
		break;
	case 12:
		m = "декабря.";
		break;
	default:
		cout << "[-] Неправильно указан месяц!";
		Sleep(2000);
		return 0;
	}
	system("cls");
	cout << "[+] Календарь\n\n";
	cout << "[+] Укажите день: ";
	cin >> day;
	switch (day) {
	case 1:
		cout << "[+] Календарь: 1 " << m;
		break;
	case 2:
		cout << "[+] Календарь: 2 " << m;
		break;
	case 3:
		cout << "[+] Календарь: 3 " << m;
		break;
	case 4:
		cout << "[+] Календарь: 4 " << m;
		break;
	case 5:
		cout << "[+] Календарь: 5 " << m;
		break;
	case 6:
		cout << "[+] Календарь: 6 " << m;
		break;
	case 7:
		cout << "[+] Календарь: 7 " << m;
		break;
	case 8:
		cout << "[+] Календарь: 8 " << m;
		break;
	case 9:
		cout << "[+] Календарь: 9 " << m;
		break;
	case 10:
		cout << "[+] Календарь: 10 " << m;
		break;
	case 11:
		cout << "[+] Календарь: 11 " << m;
		break;
	case 12:
		cout << "[+] Календарь: 12 " << m;
		break;
	case 13:
		cout << "[+] Календарь: 13 " << m;
		break;
	case 14:
		cout << "[+] Календарь: 14 " << m;
		break;
	case 15:
		cout << "[+] Календарь: 15 " << m;
		break;
	case 16:
		cout << "[+] Календарь: 16 " << m;
		break;
	case 17:
		cout << "[+] Календарь: 17 " << m;
		break;
	case 18:
		cout << "[+] Календарь: 18 " << m;
		break;
	case 19:
		cout << "[+] Календарь: 19 " << m;
		break;
	case 20:
		cout << "[+] Календарь: 20 " << m;
		break;
	case 21:
		cout << "[+] Календарь: 21 " << m;
		break;
	case 22:
		cout << "[+] Календарь: 22 " << m;
		break;
	case 23:
		cout << "[+] Календарь: 23 " << m;
		break;
	case 24:
		cout << "[+] Календарь: 24 " << m;
		break;
	case 25:
		cout << "[+] Календарь: 25 " << m;
		break;
	case 26:
		cout << "[+] Календарь: 26 " << m;
		break;
	case 27:
		cout << "[+] Календарь: 27 " << m;
		break;
	case 28:
		cout << "[+] Календарь: 28 " << m;
		break;
	case 29:
		cout << "[+] Календарь: 29 " << m;
		break;
	case 30:
		cout << "[+] Календарь: 30 " << m;
		break;
	default:
		cout << "[-] Неправильно указан день!";
		Sleep(2000);
		return 0;
	}
	int _;
	cin >> _;
}