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
    
    //if the version of x found in namespace first is wanted, then we use :: 
    //which is the scope resolution operator, it's refering to first's version of x
    std::cout << first::x;

    //If we have some entity without thr prefix of the name, 
    //it's asummed that we're using the entity found within that particular namespace
    using namespace first;

    //so, x will be 1 and we do not have to add the first prefix
    std::cout << x;

    //however, for the second namespace, 
    //it needs to be specified in this case since the using keyword is with the first namespace
     std::cout << second::x;
     
    return 0;
}