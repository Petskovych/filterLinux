#include <iostream>
#include <cstdlib>

// Function to display available Wi-Fi networks
void showAvailableNetworks() {
    // Call the command to display available networks
    system("iwlist wlan0 scan | grep 'ESSID\\|Quality\\|Encryption'");
}

// Calculator function
void calculator() {
    char op;
    double num1, num2;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    switch (op) {
    case '+':
        std::cout << "Result: " << num1 + num2;
        break;
    case '-':
        std::cout << "Result: " << num1 - num2;
        break;
    case '*':
        std::cout << "Result: " << num1 * num2;
        break;
    case '/':
        if (num2 != 0)
            std::cout << "Result: " << num1 / num2;
        else
            std::cout << "Error: Division by zero!";
        break;
    default:
        std::cout << "Error! Unknown operation.";
        break;
    }
}

int main() {
    int choice;

    // Display menu
    std::cout << "Menu:" << std::endl;
    std::cout << "1. Show available Wi-Fi networks" << std::endl;
    std::cout << "2. Calculator" << std::endl;
    std::cout << "Choose an option: ";
    std::cin >> choice;

    // Call the function based on user choice
    switch (choice) {
    case 1:
        showAvailableNetworks();
        break;
    case 2:
        calculator();
        break;
    default:
        std::cout << "Error! Unknown option.";
        break;
    }

    return 0;
}
