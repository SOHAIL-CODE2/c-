#include <iostream>

int main() {
    int number, digit, sum = 0;
    
    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    // Make a copy of the number to work with
    int temp = number;
    
    // Loop to extract each digit
    while (temp != 0) {
        digit = temp % 10;  // Extract the last digit
        
        // Check if the digit is even
        if (digit % 2 == 0) {
            sum += digit;  // Add the even digit to the sum
        }
        
        temp /= 10;  // Remove the last digit from the number
    }
    
    // Print the result
    std::cout << "Sum of all even digits in " << number << " is: " << sum << std::endl;
    
    return 0;
}
