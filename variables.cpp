#include <iostream>

/*a variable  is a resprestaion of some number or value
there are two steps to creating or using a variable:
declaration and assignment
*/

int main() {

    //To declare a variable, data type of what is being stored must be listed
    int x;
    //As well as an unique identifier, the assignment wich is x in this case
    x = 5;

    std::cout << x << "\n";

    //integer (whole number)
    int age = 21;
    int days = 7.5;

    //if 7.5 is used, the decimal will be truncated to 7
    std::cout << days << "\n";

    //double (number including decimal)
    double price = 10.99;

    //single character
    char grade = 'A';
    char dollarSign = '$';

    std::cout << dollarSign << "\n";


    //boolean (true or false)
    bool stuent = false;
    bool power = true;

    // string (objects that represents a sequence of text)
    //string are provided form the standard name space
    std::string name = "Maya";
    std::string diary = "Today is so fun, I'm learning C++";

    std::cout << name << "\n";

    //string literal
    std::cout << "Hello. " << diary << ". My age is "<< age;

    return 0;

}