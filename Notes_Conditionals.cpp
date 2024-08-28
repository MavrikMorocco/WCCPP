#include <iostream>

int main () {
    int number;
    std::cout<< "Enter a number: ";
    std::cin >> number;

    if (number> 10) {
        std::cout << "The number is greater than 10." << std::endl;
    } else if (number <10) {
        std::cout << "The number is less than 10." << std::endl;
    } else {
        std::cout << "The number is exactly 10." << std::endl;
    }
    return 0;
    }
    
    //The 'if' statement checks if he number is greater than 10.
    //The 'else if' checks if the number is less than 10.
    //The 'else' block runs if neither of the above conditions is true (ie, the number is exactly 10)
    