#include <iostream>
#include <cmath>

int main() {
	double Z, X;

	std::cout << "Enter Z: ";
	std::cin >> Z;

	if (Z >= 0) {
		X = 2 * Z + 1;
	}
	else {
		X = log(pow(Z, 2) - Z);
	}

	const auto Y = sin(pow(X, 2)) + pow(cos(pow(X, 3)), 5) + log(pow(X, 2 / 5));

	std::cout << "Result: " << Y << std::endl;

	return 0;
}