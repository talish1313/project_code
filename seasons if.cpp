#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int number;
    cout << "[-] Номера месяцев:" << endl;
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
    cout << "Введите номер месяца: ";
    cin >> number;

    if (number == 1) {
        cout << "\nВы ввели: Январь";
    }
    else if (number == 2) {
        cout << "\nВы ввели: Февраль";
    }
    else if (number == 3) {
        cout << "\nВы ввели: Март";
    }
    else if (number == 4) {
        cout << "\nВы ввели: Апрель";
    }
    else if (number == 5) {
        cout << "\nВы ввели: Май";
    }
    else if (number == 6) {
        cout << "\nВы ввели: Июнь";
    }
    else if (number == 7) {
        cout << "\nВы ввели: Июль";
    }
    else if (number == 8) {
        cout << "\nВы ввели: Август";
    }
    else if (number == 9) {
        cout << "\nВы ввели: Сентябрь";
    }
    else if (number == 10) {
        cout << "\nВы ввели: Октябрь";
    }
    else if (number == 11) {
        cout << "\nВы ввели: Ноябрь";
    }
    else if (number == 12) {
        cout << "\nВы ввели: Декабрь";
    }
    else {
        cout << "\nВы ввели неверное число!";
    }
    return 0;
}