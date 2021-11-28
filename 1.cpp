#include <iostream>
#define clear system("cls")
using namespace std;

int main();

int line() {
	clear;
	cout << "[-] Фигура: 'Линия'\n" << endl;
	cout << "[-] Выберите тип:" << endl;
	cout << "[1] Горизонтальная" << endl;
	cout << "[2] Вертикальня\n" << endl;
	cout << "[-] Выберите тип: ";

	int figur1;
	cin >> figur1;

	if (figur1 == 1) {
		int lin1;
		cout << "[-] Длина линии: ";
		cin >> lin1;

		char lin_textur1;
		cout << "[-] Текстура линии: ";
		cin >> lin_textur1;

		for (int t = 0; t < lin1; t++) {
			cout << lin_textur1;
		}
		int menu1;
		cout << "\n[-] Введиет 1, чтобы вернуться в меню: ";
		cin >> menu1;
		if (menu1 == 1) {
			main();
		}
	}

	if (figur1 == 2) {
		int lin2;
		cout << "[-] Длина линии: ";
		cin >> lin2;

		char lin_textur2;
		cout << "[-] Текстура линии: ";
		cin >> lin_textur2;

		for (int t1 = 0; t1 < lin2; t1++) {
			cout << lin_textur2;
			cout << endl;
		}
		int menu1;
		cout << "\n[-] Введиет 1, чтобы вернуться в меню: ";
		cin >> menu1;
		if (menu1 == 1) {
			main();
		}
	}
	return 0;
}

int kvadrat() {
	clear;
	cout << "[-] Фигура: 'Квадрат'\n" << endl;
	cout << "[-] Выберите тип:" << endl;
	cout << "[1] Заполненный" << endl;
	cout << "[2] Пустой\n" << endl;
	cout << "[-] Выберите тип: ";

	int figur2;
	cin >> figur2;

	if (figur2 == 1) {
		int zkvadrat1;
		cout << "[-] Размер квадрата: ";
		cin >> zkvadrat1;

		char kvadrat_textur1;
		cout << "[-] Текстура квадрата: ";
		cin >> kvadrat_textur1;

		for (int i = 0; i < zkvadrat1; i++) {
			for (int s = 0; s < zkvadrat1; s++) {
				cout << kvadrat_textur1 << " ";
			}
			cout << "\n";
		}
		int menu2;
		cout << "\n[-] Введиет 1, чтобы вернуться в меню: ";
		cin >> menu2;
		if (menu2 == 1) {
			main();
		}
	}

	if (figur2 == 2) {
		int zkvadrat2;
		cout << "[-] Размер квадрата: ";
		cin >> zkvadrat2;

		char kvadrat_textur1;
		cout << "[-] Текстура квадрата: ";
		cin >> kvadrat_textur1;

		for (int i = 0; i < zkvadrat2; i++) {
			for (int s = 0; s < zkvadrat2; s++) {
				if (i == 0 || i == zkvadrat2 - 1 || s == 0 || s == zkvadrat2 - 1) {
					cout << kvadrat_textur1 << " ";
				}
				else {
					cout << "  ";
				}

			}
			cout << "\n";
		}
		int menu2;
		cout << "\n[-] Введиет 1, чтобы вернуться в меню: ";
		cin >> menu2;
		if (menu2 == 1) {
			main();
		}
	}
	return 0;
}

int pramoug() {
	clear;
	cout << "[-] Фигура: 'Прямоугольник'\n" << endl;
	cout << "[-] Выберите тип:" << endl;
	cout << "[1] Заполненный" << endl;
	cout << "[2] Пустой\n" << endl;
	cout << "[-] Выберите тип: ";

	int figur3;
	cin >> figur3;

	if (figur3 == 1) {
		int dpram1;
		cout << "[-] Длина прямоугольника: ";
		cin >> dpram1;

		int spram1;
		cout << "[-] Ширина прямоугольника: ";
		cin >> spram1;

		char pram_textur1;
		cout << "[-] Текстура прямоугольника: ";
		cin >> pram_textur1;

		for (int i = 0; i < dpram1; i++) {
			for (int s = 0; s < spram1; s++) {
				cout << pram_textur1 << " ";
			}
			cout << "\n";
		}
		int menu3;
		cout << "\n[-] Введиет 1, чтобы вернуться в меню: ";
		cin >> menu3;
		if (menu3 == 1) {
			main();
		}
	}

	if (figur3 == 2) {
		int dpram2;
		cout << "[-] Длина прямоугольника: ";
		cin >> dpram2;

		int spram2;
		cout << "[-] Ширина прямоугольника: ";
		cin >> spram2;

		char pram_textur2;
		cout << "[-] Текстура прямоугольника: ";
		cin >> pram_textur2;

		for (int x = 0; x < dpram2; x++) {
			for (int y = 0; y < spram2; y++) {
				if (y == 0 || y == spram2 - 1 || x == 0 || x == dpram2 - 1) {
					cout << pram_textur2 << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << "\n";
		}
		int menu3;
		cout << "\n[-] Введиет 1, чтобы вернуться в меню: ";
		cin >> menu3;
		if (menu3 == 1) {
			main();
		}
	}
	return 0;
}

int treug() {
	clear;
	cout << "[-] Фигура: 'Треугольник'\n" << endl;
	cout << "[-] Выберите тип:" << endl;
	cout << "[1] Заполненный" << endl;
	cout << "[2] Пустой\n" << endl;
	cout << "[-] Выберите тип: ";

	int figur4;
	cin >> figur4;

	if (figur4 == 1) {
		int treug1;
		cout << "[-] Размер треугольника: ";
		cin >> treug1;

		char trug_textur1;
		cout << "[-] Текстура треугольника: ";
		cin >> trug_textur1;

		for (int y = 0; y < treug1; y++) {
			for (int x = 0; x < treug1; x++) {
				if (x >= treug1 / 2 - y && x <= treug1 / 2 + y && y <= treug1 / 2) {
					cout << trug_textur1 << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << "\n";
		}
		int menu4;
		cout << "\n[-] Введиет 1, чтобы вернуться в меню: ";
		cin >> menu4;
		if (menu4 == 1) {
			main();
		}
	}

	if (figur4 == 2) {
		int treug2;
		cout << "[-] Размер треугольника: ";
		cin >> treug2;

		char trug_textur2;
		cout << "[-] Текстура треугольника: ";
		cin >> trug_textur2;

		for (int y = 0; y < treug2; y++) {
			for (int x = 0; x < treug2; x++) {
				if (x == treug2 / 2 + y || x == treug2 / 2 - y || y == treug2 / 2) {
					cout << trug_textur2 << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << "\n";
		}
		int menu4;
		cout << "\n[-] Введиет 1, чтобы вернуться в меню: ";
		cin >> menu4;
		if (menu4 == 1) {
			main();
		}
	}
	return 0;
}

int reshot() {
	clear;
	cout << "[-] Фигура: 'Решоточка'\n" << endl;
	cout << "[-] Выберите размер решотки" << endl;

	int reshot;
	cout << "[-] Размер решотка: ";
	cin >> reshot;

	char reshot_textur;
	cout << "[-] Текстура решотки: ";
	cin >> reshot_textur;

	for (int y = 0; y < reshot; y++) {
		for (int x = 0; x < reshot; x++) {
			if (x % 2 == 0 || y % 2 == 0) {
				cout << reshot_textur << " ";
			}
			else {
				cout << "  ";
			}
		}
		cout << "\n";
	}
	int menu5;
	cout << "\n[-] Введиет 1, чтобы вернуться в меню: ";
	cin >> menu5;
	if (menu5 == 1) {
		main();
	}
	return 0;
}

int plusik() {
	clear;
	cout << "[-] Фигура: 'Плючик'\n" << endl;
	cout << "[-] Выберите размер плюсика" << endl;

	int plus;
	cout << "[-] Размер плюсика: ";
	cin >> plus;

	char plus_textur;
	cout << "[-] Текстура плюсика: ";
	cin >> plus_textur;

	for (int y = 0; y < plus; y++) {
		for (int x = 0; x < plus; x++) {
			if (x == plus / 2 || y == plus / 2) {
				cout << plus_textur << " ";
			}
			else {
				cout << "  ";
			}
		}
		cout << "\n";
	}
	int menu6;
	cout << "\n[-] Введиет 1, чтобы вернуться в меню: ";
	cin >> menu6;
	if (menu6 == 1) {
		main();
	}
	return 0;
}

int krest() {
	clear;
	cout << "[-] Фигура: 'Крестик'\n" << endl;
	cout << "[-] Выберите размер крестика" << endl;

	int krest;
	cout << "[-] Размер крестика: ";
	cin >> krest;

	char krest_textur;
	cout << "[-] Текстура крестика: ";
	cin >> krest_textur;

	for (int y = 0; y < krest; y++) {
		for (int x = 0; x < krest; x++) {
			if (x == y || krest - x == y + 1) {
				cout << krest_textur << " ";
			}
			else {
				cout << "  ";
			}
		}
		cout << "\n";
	}
	int menu7;
	cout << "\n[-] Введиет 1, чтобы вернуться в меню: ";
	cin >> menu7;
	if (menu7 == 1) {
		main();
	}
	return 0;
}

int main() {
	setlocale(0, "");
	clear;
	cout << "[-] Программа - 'Геометрические фигуры'" << endl;
	cout << "[1] Линия" << endl;
	cout << "[2] Квадрат" << endl;
	cout << "[3] Прямоуголник" << endl;
	cout << "[4] Треуголник" << endl;
	cout << "[5] Решотка" << endl;
	cout << "[6] Плюсик" << endl;
	cout << "[7] Крестик" << endl;
	cout << "[0] Выйти" << endl;
	cout << "[-] Введите: ";

	int figura;
	cin >> figura;

	switch (figura)
	{
	case 0:
		exit(-1);
		break;
	case 1:
		line();
		break;
	case 2:
		kvadrat();
		break;
	case 3:
		pramoug();
		break;
	case 4:
		treug();
		break;
	case 5:
		reshot();
		break;
	case 6:
		plusik();
		break;
	case 7:
		krest();
		break;
	default:
		cout << "Вы ввели неверное значение!";
		break;
	}
	return 0;
}