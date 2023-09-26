#include <iostream>

int multiplyLastDigits(int n, int m) {

	int product = 1;
	int count = 0;

	while (n > 0 && count < m) {
		int digit = n % 10;
		product *= digit;
		n /= 10;
		count++;
	}

	return product;
}

int main() {
	setlocale(LC_ALL, "Russian");

	int n, m;
	std::cout << "Введите число n: ";
	std::cin >> n;
	std::cout << "Введите число m: ";
	std::cin >> m;

	int result = multiplyLastDigits(n, m);
	std::cout << "Произведение последних " << m << " цифр числа " << n << ": " << result << std::endl;

	return 0;
}
