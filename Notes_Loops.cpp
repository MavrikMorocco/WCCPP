#include <iostream>
//For Loop Example
int main() {
    // This loop will print numbers 1 through 5
    for (int i = 1; i<= 5, i++) {
        std::cout << "Number: " << i << std::endl;
    }
    return 0;
}

//'int i = 1;' : initializes the loop variable i to 1
//'i <=5;' : the loop runs as long as 'i' is less than or equal to 5
//'i++': After each loop iteration, 'i' is incremented by 1

//While Loop 

int main () {
    int i =1; //Initialize variable

    //This loop will print numbers 1 through 5
    while (i <= 5) {
        std::cout << "Number:" << i << std::endl:
        i++; // Increment the variable
    }
    return 0;
}

//the loop continues to run as long as 'i' is less than or equal to 5
//the variable 'i' is incremented inside the loop, so the loop eventually stops when 'i' becomes 6.