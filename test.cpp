#include <iostream>

int main() {
     char grade;
    std::cout << "Please enter a letter grade (A-F): ";
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
        std::cout << "Grade is an A";
        break;

    case 'B':
        std::cout << "Grade is an B";
        break;

    case 'C':
        std::cout << "Grade is an C";
        break;

    case 'D':
        std::cout << "Grade is an D";
        break;

    case 'F':
        std::cout << "Grade is an F";
        break;

    default:
        std::cout << "Pleae enter a letter grade (A-F)";
        break;
    }

    return 0;
}