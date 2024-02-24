#include <iostream>

int main() {
    char names[][10] = {"Alice", "Bob", "Charlie", "Dave"};
    int size = sizeof(names) / sizeof(names[0]);

    // Method 1: Using the array size
    std::cout << "Method 1: Using the array size" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << names[i] << std::endl;
    }
    std::cout << std::endl;

    // Method 2: Using a pointer and pointer arithmetic
    std::cout << "Method 2: Using a pointer and pointer arithmetic" << std::endl;
    char (*ptr)[10] = names;
    for (int i = 0; i < size; i++) {
        std::cout << *(ptr + i) << std::endl;
    }
    std::cout << std::endl;

    // Method 3: Using range-based for loop
    std::cout << "Method 3: Using range-based for loop" << std::endl;
    for (const char (&name)[10] : names) {
        std::cout << name << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
