#include <iostream>

int main() {
	int A;

	std::cout << "Enter A: ";
	std::cin >> A;

	for (int i = 1; i < A; i++) {
		if (A % i == 0) {
			std::cout << "Result: " << i << std::endl;
		}
	}

	return 0;
}