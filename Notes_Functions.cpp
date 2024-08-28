#include <iostream>

//Function to add two numbers
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int result = addNumbers(5, 3); // Call the function
    std::cout << "The sum is: " << result << std::endl;
    return 0;
}

//'int addNumbers(int a, int b)' : This is a function that takes two integers as arguments and returns their sum
//The function is called in 'main()' with the arguments '5' and '3'
//The result is stored in the variable 'result' and then printed.