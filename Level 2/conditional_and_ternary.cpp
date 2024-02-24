#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "The number is " << (num % 2 == 0 ? "even" : "odd") << "." << std::endl;

    return 0;
}

//tenery operator is used to check the condition and return the value based on the condition

//syntax: condition ? value_if_true : value_if_false

//if the condition is true then value_if_true is returned else value_if_false is returned

//in the above code, if the number is even then "even" is returned else "odd" is returned