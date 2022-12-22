#include <iostream>
 /*
    typedef (along with the using keyword) is a reserved keyword used to create an additional name (alias) for another data type.
    New identifier for an existing type 
    Helps with readibility and reduces typos
*/

/*
a typedef for standard strings:
-type typedef and list the original data type
-then we create a new identifier for the data type, name_t
_t is a naming convention for typedef
*/
typedef std::string name_t;
typedef int number_t;

int main() {

    name_t firstName = "Maya";
    number_t age = 21;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}

//Note: the using keyword is more popular than typedef
//Example with the using keyword

using name_t = std::string;
using number_t = int;