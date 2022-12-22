#include <iostream>

int main() {
    /*
    The const keyword specifies that a variable's value is constant
    tells the compiler to prevent anything form modifying it
    (read-only)
    */

   /*
   any variable that we do not want to be changed at all, we can turn into a const
   the naming convention for constants is to make all of the letters uppercase
   adds data security
   */ 
   const double PI = 3.14159;

   //if const is changed later, a error will occured
   //example: PI = 40, there will be an error

   double radius = 10;
   double cirumference = 2 * PI * radius;

   std::cout << cirumference << "cm";

    return 0;
}