#include <iostream>

int main() {
	double A, B, result;
	char OP;

	while (true) {
		std::cout << "Enter A: ";
		std::cin >> A;

		std::cout << "Enter operator(+, -, *, /): ";
		std::cin >> OP;

		std::cout << "Enter B: ";
		std::cin >> B;
	}

	if (OP == '+') {
		result = A + B;
		std::cout << "Result: " << result << std::endl;
	}
	else if (OP == '-') {
		result = A - B;
		std::cout << "Result: " << result << std::endl;
	}
	else if (OP == '*') {
		result = A * B;
		std::cout << "Result: " << result << std::endl;
	}
	else if (OP == '/') {
		result = A / B;
		std::cout << "Result: " << result << std::endl;
	}
	else {
		std::cout << "Unknown operator!" << std::endl;
	}

	return 0;
}