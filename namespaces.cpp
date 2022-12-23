#include <iostream>

//there can be different versions of the same variable as long as they're within a different name

namespace first {
    //a different version of x 
    int x = 1;
}

namespace second {
    //a different version of x 
    int x = 2;
}

int main() {

      /*
    Namespace provides a solution for preventing name conflicts in large projects.
    Each entity needs a unique name. A namespace allows for identically named entities
    as long as the namespaces are different.
    Namespaces allows for 2 or more entities to share the same name
    */

    int x = 0;

    //if a namespace is not explicitly stated, the local version of that entity will be used
    std::cout << x;
    
    //if the version of x found in namespace first is wanted, then we used:
    std::cout << first::x;

    //If we have 
    using namespace first;


    return 0;
}