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
	cout << "[+] Программа - \"Геометрические фигуры\"\n\n";
	cout << "[1] Линия\n";
	cout << "[2] Квадрат\n";
	cout << "[3] Прямоугольник\n";
	cout << "[4] Треугольник\n";
	cout << "[5] Решетка\n";
	cout << "[6] Крестик\n";
	cout << "[7] Плюс\n";
	cout << "[8] Ромб\n\n";
	cout << "[+] Выберите фигуру: ";

	cin >> menu;

	if (menu == 1) {
		system("cls");
		cout << "[+] Фигура: \"Линия\"\n\n";
		cout << "[1] Горизонтальная\n";
		cout << "[2] Вертикальная\n\n";
		cout << "[+] Выберите тип: ";
		cin >> type;
		if (type == 1) {
			system("cls");
			cout << "[+] Длина линии: ";
			cin >> x;
			cout << "[+] Текстура линии: ";
			cin >> chtype;
			while (x > 0) {
				cout << chtype << " ";
				x--;
			}
		}
		else if (type == 2) {
			system("cls");
			cout << "[+] Длина линии: ";
			cin >> x;
			cout << "[+] Текстура линии: ";
			cin >> chtype;
			while (x > 0) {
				cout << chtype << "\n";
				x--;
			}
		}
	}
	else if (menu == 2) {
		system("cls");
		cout << "[+] Фигура: \"Квадрат\"\n\n";
		cout << "[1] Заполненный\n";
		cout << "[2] Пустой\n\n";
		cout << "[+] Выберите тип: ";
		cin >> type;
		if (type == 1) {
			system("cls");
			cout << "[+] Размер квадрата";
			cin >> x;
			cout << "[+] Текстура квадрата";
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