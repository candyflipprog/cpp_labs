#include <iostream>
#include <cmath>

int main() {
    float y, a, b;

    std::cout << "Enter y = ";
    std::cin >> y;

    std::cout << "Enter b = ";
    std::cin >> b;

    std::cout << "Enter a = ";
    std::cin >> a;

    const float result = (sqrt(y + 2) + 6) / (sqrt(14 * y + 2) + cos(b) + a);
    
    printf("Result: %f\n", result);

    return 0;
}
