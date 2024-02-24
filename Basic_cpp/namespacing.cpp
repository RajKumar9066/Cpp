#include <iostream>

namespace TicketSystem1 {
    void getTicket() {
        std::cout << "TicketSystem1: Getting ticket from system 1" << std::endl;
    }
}

namespace TicketSystem2 {
    void getTicket() {
        std::cout << "TicketSystem2: Getting ticket from system 2" << std::endl;
    }
}

int main() {
    TicketSystem1::getTicket();
    TicketSystem2::getTicket();

    return 0;
}

//Namespaces are used to organize code into logical groups and prevent naming conflicts.

//In this example, we have two namespaces, TicketSystem1 and TicketSystem2, each containing a function called getTicket(). When we call getTicket() in the main() function, we use the scope resolution operator (::) to specify which namespace the function belongs to. This allows us to have two functions with the same name in different namespaces without causing a naming conflict.

//using namespace std defines that we are using the standard namespace. This means that we can use names from the standard namespace without having to prefix them with std::. For example, we can use cout and endl directly without having to write std::cout and std::endl.

//However, using namespace std is generally considered bad practice because it can lead to naming conflicts and make the code less readable. It is better to use the scope resolution operator to explicitly specify the namespace for each name that we use. For example, we can write std::cout and std::endl instead of using namespace std.

