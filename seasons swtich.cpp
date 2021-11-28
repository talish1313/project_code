#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	cout << "[-] Календарь" << endl;
    cout << "[1] Январь" << endl;
    cout << "[2] Февраль" << endl;
    cout << "[3] Март" << endl;
    cout << "[4] Апрель" << endl;
    cout << "[5] Май" << endl;
    cout << "[6] Июнь" << endl;
    cout << "[7] Июль" << endl;
    cout << "[8] Август" << endl;
    cout << "[9] Сентябрь" << endl;
    cout << "[10] Октябрь" << endl;
    cout << "[11] Ноябрь" << endl;
    cout << "[12] Декабрь" << endl;
	cout << "[-] Выберите месяц: ";

	int num;
	cin >> num;

	switch (num)
	{
	case 1:
		cout << "\nВыбран месяц: Январь";
		break;
	case 2:
		cout << "\nВыбран месяц: Февраль";
		break;
	case 3:
		cout << "\nВыбран месяц: Март";
		break;
	case 4:
		cout << "\nВыбран месяц: Апрель";
		break;
	case 5:
		cout << "\nВыбран месяц: Май";
		break;
	case 6:
		cout << "\nВыбран месяц: Июнь";
		break;
	case 7:
		cout << "\nВыбран месяц: Июль";
		break;
	case 8:
		cout << "\nВыбран месяц: Август";
		break;
	case 9:
		cout << "\nВыбран месяц: Сентябрь";
		break;
	case 10:
		cout << "\nВыбран месяц: Октябрь";
		break;
	case 11:
		cout << "\nВыбран месяц: Ноябрь";
		break;
	case 12:
		cout << "\nВыбран месяц: Декабрь";
		break;
	default:
		cout << "\nНе правильно введён номер месяца!";
		break;
	}
	return 0;
}