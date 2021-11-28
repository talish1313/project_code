int main() {
	setlocale(0, "");
	cout << "Введите знак: ";
	char znak;
	cin >> znak;
	cout << "Введите первую цифру: ";
	int number1;
	cin >> number1;
	cout << "Введите вторую цифру: ";
	int number2;
	cin >> number2;

	int c;
	if (znak == '+') {
		c = number1 + number2;
		cout << "Равно: " << c;
	}
	if (znak == '-') {
		c = number1 - number2;
		cout << "Равно: " << c;
	}
	if (znak == '/') {
		c = number1 / number2;
		cout << "Равно: " << c;
	}
	if (znak == '*') {
		c = number1 * number2;
		cout << "Равно: " << c;
	}
	if (znak == '%') {
		c = number1 % number2
		cout << "Равно: " << c;
	}
	return 0;
}