#include <iostream>
#include <cmath> // math library 

//min and max function not a part of the cmath library
//so, no need to include it with just min and max functions

int main() {

    double x = 3;
    double y = 4;
    double z;

    //max function, returns the greater of 2 values or variables
    //the results are stored within z
    z = std::max(x, y);
    std::cout << z;

    //min function, returns the minimum of 2 values or variables
    z = std::min(x, y);
    std::cout << z;

    //pow function, raises a base to a given power
    //2 is being raise to the power of 3, which is 8
    z = pow(2, 3);

    //sqrt function, finds the square root of a function
    z = sqrt(9); //equals 3

    //abs function, finds the absolute value 
    //which finds the positive version of a number how far away it is from zero
    z = abs(-3); //equals 3

    //round function, rounds a number
    double a = 3.14;
    z = round(a);

    //ceil function, rounds a number up
    //stands for ceiling
    z = ceil(a); //rounds to 4

    //floor function, rounds a number down
    double b = 3.99;
    z = floor(b); //rounds to 3

    return 0;
}