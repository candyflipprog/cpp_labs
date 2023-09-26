#include <iostream>
#include <cmath>

double function(double x) {
    return exp(x) * sin(x);
}

void printTable(double a, double b, double h) {
    int num = 1;
    double x = a;
    double prevValue = function(x);
    double minValue = prevValue;
    double maxValue = prevValue;

    std::cout << "Table:\n";
    std::cout << "Number\t| Argument\t| Function\t| Trend\t\t| Difference\n";

    while (x <= b) {
        double value = function(x);
        std::cout << num << "\t| " << x << "\t| " << value << "\t| ";

        if (value > prevValue) {
            std::cout << "Increasing\t| ";
        }
        else if (value < prevValue) {
            std::cout << "Decreasing\t| ";
        }
        else {
            std::cout << "Constant\t| ";
        }

        std::cout << value - prevValue << "\n";

        if (value < minValue) {
            minValue = value;
        }

        if (value > maxValue) {
            maxValue = value;
        }

        prevValue = value;
        x += h;
        num++;
    }

    std::cout << "\nMinimum value: " << minValue << "\n";
    std::cout << "Maximum value: " << maxValue << "\n";
}

int main() {
    double a, b, h, PI;
    PI = 3.14;

    std::cout << "Enter a: ";
    std::cin >> a;
    a = a * PI;

    std::cout << "Enter b: ";
    std::cin >> b;
    b = b * PI;

    std::cout << "Enter h: ";
    std::cin >> h;
    h = PI / h;

    printTable(a, b, h);

    return 0;
}