#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int menu;
	string eng[15] = { "House", "Road", "Bee", "Job", "Tree", "Lock", "Desk", "Wall", "Doorknob", "Pebble", "Jackhammer", "Ditch", "Match", "Wit", "Aid"};
	string rus[15] = { "���", "������", "�����", "������", "������", "�����", "���������� ����", "�����", "������� �����", "������", "�������� �������", "������", "������", "��", "������" };
	cout << "[+] ����������\n\n";
	cout << "[1] ������� �����\n";
	cout << "[2] ���������� �����\n\n";
	cout << "[3] �����\n\n";
	cin >> menu;
	switch (menu) {
	case 1:
		system("cls");
		int choiceru;
		cout << "[+] ���������� \"������ ������� ����\"\n\n";
		cout << "[1] " << rus[0] << endl;
		cout << "[2] " << rus[1] << endl;
		cout << "[3] " << rus[2] << endl;
		cout << "[4] " << rus[3] << endl;
		cout << "[5] " << rus[4] << endl;
		cout << "[6] " << rus[5] << endl;
		cout << "[7] " << rus[6] << endl;
		cout << "[8] " << rus[7] << endl;
		cout << "[9] " << rus[8] << endl;
		cout << "[10] " << rus[9] << endl;
		cout << "[11] " << rus[10] << endl;
		cout << "[12] " << rus[11] << endl;
		cout << "[13] " << rus[12] << endl;
		cout << "[14] " << rus[13] << endl;
		cout << "[15] " << rus[14] << endl;
		cout << "[16] �������� ����� �����: ";
		cin >> choiceru;
		switch (choiceru) {
		case 1:
			cout << "�������: " << rus[0] << " -> " << eng[0];
			break;
		case 2:
			cout << "�������: " << rus[1] << " -> " << eng[1];
			break;
		case 3:
			cout << "�������: " << rus[2] << " -> " << eng[2];
			break;
		case 4:
			cout << "�������: " << rus[3] << " -> " << eng[3];
			break;
		case 5:
			cout << "�������: " << rus[4] << " -> " << eng[4];
			break;
		case 6:
			cout << "�������: " << rus[5] << " -> " << eng[5];
			break;
		case 7:
			cout << "�������: " << rus[6] << " -> " << eng[6];
			break;
		case 8:
			cout << "�������: " << rus[7] << " -> " << eng[7];
			break;
		case 9:
			cout << "�������: " << rus[8] << " -> " << eng[8];
			break;
		case 10:
			cout << "�������: " << rus[9] << " -> " << eng[9];
			break;
		case 11:
			cout << "�������: " << rus[10] << " -> " << eng[10];
			break;
		case 12:
			cout << "�������: " << rus[11] << " -> " << eng[11];
			break;
		case 13:
			cout << "�������: " << rus[12] << " -> " << eng[12];
			break;
		case 14:
			cout << "�������: " << rus[13] << " -> " << eng[13];
			break;
		case 15:
			cout << "�������: " << rus[14] << " -> " << eng[14];
			break;
		default:
			return 0;
		}
		break;
	case 2:
		system("cls");
		int choiceen;
		cout << "[+] ���������� \"������ ���������� ����\"\n\n";
		cout << "[1] " << eng[0] << endl;
		cout << "[2] " << eng[1] << endl;
		cout << "[3] " << eng[2] << endl;
		cout << "[4] " << eng[3] << endl;
		cout << "[5] " << eng[4] << endl;
		cout << "[6] " << eng[5] << endl;
		cout << "[7] " << eng[6] << endl;
		cout << "[8] " << eng[7] << endl;
		cout << "[9] " << eng[8] << endl;
		cout << "[10] " << eng[9] << endl;
		cout << "[11] " << eng[10] << endl;
		cout << "[12] " << eng[11] << endl;
		cout << "[13] " << eng[12] << endl;
		cout << "[14] " << eng[13] << endl;
		cout << "[15] " << eng[14] << endl;
		cout << "[16] �������� ����� �����: ";
		cin >> choiceen;
		switch (choiceen) {
		case 1:
			cout << "�������: " << eng[0] << " -> " << rus[0];
			break;
		case 2:
			cout << "�������: " << eng[1] << " -> " << rus[1];
			break;
		case 3:
			cout << "�������: " << eng[2] << " -> " << rus[2];
			break;
		case 4:
			cout << "�������: " << eng[3] << " -> " << rus[3];
			break;
		case 5:
			cout << "�������: " << eng[4] << " -> " << rus[4];
			break;
		case 6:
			cout << "�������: " << eng[5] << " -> " << rus[5];
			break;
		case 7:
			cout << "�������: " << eng[6] << " -> " << rus[6];
			break;
		case 8:
			cout << "�������: " << eng[7] << " -> " << rus[7];
			break;
		case 9:
			cout << "�������: " << eng[8] << " -> " << rus[8];
			break;
		case 10:
			cout << "�������: " << eng[9] << " -> " << rus[9];
			break;
		case 11:
			cout << "�������: " << eng[10] << " -> " << rus[10];
			break;
		case 12:
			cout << "�������: " << eng[11] << " -> " << rus[11];
			break;
		case 13:
			cout << "�������: " << eng[12] << " -> " << rus[12];
			break;
		case 14:
			cout << "�������: " << eng[13] << " -> " << rus[13];
			break;
		case 15:
			cout << "�������: " << eng[14] << " -> " << rus[14];
			break;
		default:
			return 0;
		}
		break;
	case 3:
		return 0;
		break;
	default:
		return 0;
	}
	int _;
	cin >> _;
}