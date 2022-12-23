#include <iostream>
#include <cmath>

//calculator that calculates the hypotenuse of a right triangle

int main() {

    double a, b, c;

    std::cout << "Please enter side a: ";
    std::cin >> a;

    std::cout << "Please enter side b: ";
    std::cin >> b;
    
    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The hypotenuse of the right triangle is: " << c;

    return 0;
}