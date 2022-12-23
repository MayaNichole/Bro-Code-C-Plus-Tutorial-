#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)
    //(character input)

int main() {

    std::string name;
    int age;

    //does not hold the any words after first space
    std::cout << "what's your name?: ";
    std::cin >> name;

    std::cout << "what's your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    /*
    For strings that contain spaces, we use the getline function
    however, if std::cin >> age; is used before std::getline(std::cin, name);
    then, there will be a newline character in the input buffer
    meaing that what's your name?: Hello
                               You are 21 years old
    will show, getline accepts the newline character still within the buffer
    */
    std::cout << " what's your full name?: ";
    std::getline(std::cin, name);

    //To prevent this, we add std::ws
    //ws stands for white space and will revome any newline characters or whitescpaces
    //before user input
    std::getline(std::cin >> std::ws, name);
    std::cout << name;


    return 0;
}