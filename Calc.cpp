#include <iostream>
#include <limits>

int main() {
    char operation;
    float num1, num2;

    std::cout << "Enter two operands: ";
    std::cin >> num1 >> num2;

    // Clear any remaining input and ignore extra characters
    std::cin.clear(); // Clear any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> operation;

    switch (operation) {
        case '+': 
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;
        case '-': 
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;
        case '*': 
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;
        case '/': 
            if (num2 != 0) 
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            else
                std::cout << "Error! Division by zero." << std::endl;
            break;
        default:
            std::cout << "Invalid operator!" << std::endl;
            break;
    }

    return 0;
}
