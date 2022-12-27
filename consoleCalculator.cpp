#include <iostream>

// simple console calculator for addition, subtraction, multiplication, division

int main() {
    
    int num1, num2, result;
    char oper;

    std::cout << "********CALCULATOR************\n";

    std::cout << "\nPlease enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operator: ";
    std::cin >> oper;

    std::cout << "Please eneter second number: ";
    std::cin >> num2;

    switch (oper) {
    case '+':
        result = (num1 + num2);
        std::cout << num1 << " + " << num2 << " = " << result;
        break;

    case '-':
        result = (num1 - num2);
        std::cout << num1 << " - " << num2 << " = " << result;
        break;

    case '*':
        result = (num1 * num2);
        std::cout << num1 << " * " << num2 << " = " << result;
        break;

    case '/':
        result = (num1 / num2);
        std::cout << num1 << " / " << num2 << " = " << result;
        break;

    default:
        std::cout << "\nPlease enter only +, - , *, /";
        break;
    }

    return 0;
}