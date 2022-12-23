#include <iostream>

//arithmetic operators return the result of a specfific arithmetic ( +, -, *, /)
    //ODER OF PRECENDENCE
    /*
    parenthesis
    multiplication and division
    addition and subtraction
    */

int main() {

    int students = 20;

    //addition can be typed as
    students = students + 1;
    //or, students + 1
    students+= 1;
    //or, students + 1
    students++;

    //subtraction can be typed as
    students = students - 1;
    students-= 1;
    students--;

    //multiplication can be typed as
    students = students * 2;
    students *= 2;

    //division can be typed as
    students = students / 2;
    students/= 3;

    //modulus operator gives the remainders for division 
    //great to find even(remainder will be 0) or odd(remainder will be 1) numbers
    int remainder = students % 3;

    std::cout << remainder;

    std::cout << students;

    return 0;
}