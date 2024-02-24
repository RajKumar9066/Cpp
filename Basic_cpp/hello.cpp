// #include <iostream>

// int main() {
//     std::cout << "Hello, Cpp!" << std::endl;
//     return 0;
// }

#include <cstdio>
using namespace std;

int main() {
    puts("Hello, Cpp!");
    puts("Hello, Raj");
    return 0;
}

//diffrence between puts and cout.
//puts is a function that is used to print a string to the console. It automatically appends a newline character at the end of the string.
//cout is an object of the ostream class that is used to print a string to the console. It does not append a newline character at the end of the string. You have to manually add it using the endl manipulator or the newline character \n.

//toggle word wrap in terninal or alt + Z

//c++ versions
//C++98 (ISO/IEC 14882:1998) – The first C++ standard.

//C++03 (ISO/IEC 14882:2003) – A bug fix release of C++98.

//C++11 (ISO/IEC 14882:2011) – The first major update to the C++ language.that introduced many new features, including auto, nullptr, range-based for loops, lambda expressions, and move semantics.

//C++14 (ISO/IEC 14882:2014) – A minor update to C++11 that added a few new features, such as binary literals, generic lambdas, and variable templates.

//C++17 (ISO/IEC 14882:2017) – Another major update to the C++ language that introduced many new features, such as structured bindings, inline variables, and fold expressions.

//C++20 (ISO/IEC 14882:2020) – The latest version of the C++ language, which introduced many new features, such as concepts, ranges, and coroutines.

void print() {
    cout << "Hello, World!" << endl;
}

char* getHello() {
    return "Hello, World!";
}

//diffrent return types.
//The first function, print(), returns void, which means it does not return any value.

//The second function, getHello(), returns a pointer to a character array (i.e., a C-style string).

