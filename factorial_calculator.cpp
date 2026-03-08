#include <iostream>

// Use long long to handle larger factorial results
long long factorial(long long a);

int main() {
    long long inputNumber;

    std::cout << "Enter a number to calculate its factorial: ";
    std::cin >> inputNumber;

    // Input validation: Factorial is only defined for non-negative integers
    while (inputNumber < 0) {
        std::cout << "Error: Please enter a non-negative integer!" << std::endl;
        std::cout << "Enter a number: ";
        std::cin >> inputNumber;
    }

    std::cout << "Result: " << factorial(inputNumber) << std::endl;

    return 0;
}
 //Function to calculate factorial
long long factorial(long long a) {
    long long result = 1;
    for (int i = 1; i <= a; i++) {
        result *= i; 
    }
    return result;
}
