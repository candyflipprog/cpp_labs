#include <iostream>

int main() {
    std::string number;

    std::cout << "Enter number: ";
    std::cin >> number;

    char a = number.c_str()[0];
    char b = number.c_str()[1];
    char c = number.c_str()[2];

    int result = (a - '0') + (b - '0') + (c - '0');
    
    printf("Result: %d\n", result);

    return 0;
}
