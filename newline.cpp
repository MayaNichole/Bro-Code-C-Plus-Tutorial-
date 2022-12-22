//iostream is a header file that contains functions for basic input and output operations
#include <iostream>

int main() {

    /*
    std is standard, c is character, out is output as wellas <<
    altoghether means standard character output
    meaning that we're going to display some characters as output
    */

   // :: is the scope resolution operator
   
    std::cout << "Hello world";

    /*
    endl means end line, endl is a manupulator 
    manipulators are operators that are used to format the data display
    */

    std::cout << "What's up world" << std::endl;

    /*
     \n is a charcter and means new line and is better preformance wise than endl
    However, \n requires 1 byte of memory whereas endl does not
    */

    std::cout << "What's up world" << '\n';

    /*
    if 0 is returned, there was no problems in the program
    if 1 is returned, there was a probelm in the program
    */

    return 0;
}