#include <iostream>

// A switch is an alternative statement to using many "else if" statements,
// it compares one value against matching cases
// More efficient than "else if" statements

// NOTE: logical operators like OR (||) will not work in a switch case, only the first argument will be considered at execution time
// NOTE: switch statements are used for executing only ONE CONDITIONS against MULTIPLE CONDITIONS
// NOTE: switch statements' case values can only be of “char” and “int” type

int main()
{

    int month;
    std::cout << "Enter a month (1-12): ";
    std::cin >> month;

    // month is the value that we would like to examine against matching cases.
    // To write a case, we type case then the value we would like to check against followed by semicolons
    switch (month){
    // checking to see if month is equal to 1
    case 1:
        // if month is equal to 1, display...
        std::cout << "It is January";
        // breaks out of the switch
        break;

    case 2:
        std::cout << "It is Febuary";
        break;

    case 3:
        std::cout << "It is March";
        break;

    case 4:
        std::cout << "It is April";
        break;

    case 5:
        std::cout << "It is May";
        break;

    case 6:
        std::cout << "It is June";
        break;

    case 7:
        std::cout << "It is July";
        break;

    case 8:
        std::cout << "It is August";
        break;

    case 9:
        std::cout << "It is September";
        break;

    case 10:
        std::cout << "It is October";
        break;

    case 11:
        std::cout << "It is November";
        break;

    case 12:
        std::cout << "It is December";
        break;

    // if there are no matching cases, we can use a default case
    // similar to a else statement
    // so if there are no matching cases, whatever is in the default case will be executed
    default:
        std::cout << "Please enter in only number (1-12";
        break;
    }

    char grade;
    std::cout << "\nPlease enter a letter grade (A-F): " ;
    std::cin >> grade;

    switch (grade) {
    case 'A':
        std::cout << "Grade is (90-100)";
        break;

    case 'B':
        std::cout << "Grade is a (80-89)";
        break;

    case 'C':
        std::cout << "Grade is a (70-79)";
        break;

    case 'D':
        std::cout << "Grade is a (60-69)";
        break;

    case 'F':
        std::cout << "Grade is a (50-59)";
        break;

    default:
        std::cout << "Pleae enter a letter grade (A-F)";
        break;
    }

    return 0;
}