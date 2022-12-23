#include <iostream>

//very helpful with integer division

/*
Type conversion is the conversion of a value  of one data type to another, 
2 ways in which we can do this are:
    implicit is done automatically
    If explicit, we precede a value with the new data type within a set of parentheses
    inside, we list the new data type and put it before a variable or a value, ex: (int) x
*/

int main() {

    //implicit cast
    //x is implicitlly truncated to 3
    int x = 3.14;
    std::cout << x;

    //explicit cast
    //3.14 will be converted to an integer, then stored within the double x
    //x now equals 3
    double x = (int) 3.14;
    std::cout << x;

    //implicit cast
    //x is implicitly cast to a char and converted using the ACII table to d
    char x = 100;
    std::cout << x;

    //explicit cast
    //100 is explicitly cast to a char and and converted using the ACII table to d
    //x now equals 3
    std::cout << (char) 100;

    //Practical example
    /*
    suppose we have an online exam and have to score each user
    by how many questions they answered correctly divided by the total questions
    */

   int correct = 8;
   int questions = 10;
   //the score needs to be a percentage
   double score = correct/questions * 100;
   //if we do it like this, the output gives us a 0
   //as we're using integer divion, meaning that the 8/10 remainder will be truncated
   std::cout << score << "%" ;

   //we can explicitly cast questions as a double to advoid this problem
   //and we retain the decimal portion, which will give us 80%
    double score = correct/(double)questions * 100;
    std::cout << score << "%" ;

    return 0;
}