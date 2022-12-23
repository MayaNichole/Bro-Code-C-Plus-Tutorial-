#include <iostream>

//if statements do something if a condition is true
//if not, then don't do it
//if some condition within the parentheses is true you preform some subset of code


int main() {

    int age;

    std::cout << "Please enter your age: ";
    std::cin >> age;

    //if statement
    if(age >= 18) {
        std::cout << "Welcome to the site!";
    }
    else{
        std::cout << "You are not old enough to enter";
    }

    //if statement continued
     if(age >= 18) {
        std::cout << "Welcome to the site!";
    }
    else{
        std::cout << "You are not old enough to enter";
    }

    //else if statement
     if(age >= 18) {
        std::cout << "Welcome to the site!";
    }
    else if(age < 0) {
        std::cout << "You haven't been born yet!";
    }
    else{
        std::cout << "You are not old enough to enter";
    }

    //else if statement continued
    //the order matters as if the user enter 120, they will be welcomed to the site
     if(age >= 18) {
        std::cout << "Welcome to the site!";
    }
    else if(age < 0) {
        std::cout << "You haven't been born yet!";
    }
    else if( age >= 100) {
        std::cout << "You are a boomer";
    }
    else{
        std::cout << "You are not old enough to enter";
    }

    //Putting if(age >= 100), corrects this problem  
    if(age >= 100) {
        std::cout << "You are a boomer";
    }
    else if(age < 0) {
        std::cout << "You haven't been born yet!";
    }
    else if( age >= 18) {
        std::cout << "Welcome to the site";
    }
    else{
        std::cout << "You are not old enough to enter";
    }

    return 0;
}