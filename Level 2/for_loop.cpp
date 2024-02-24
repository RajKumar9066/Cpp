#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    // Using a for loop
    std::cout << "Using a for loop:" << std::endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Using a range-based for loop (for-each loop)
    std::cout << "Using a range-based for loop:" << std::endl;
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

//for each loop is used to iterate through the elements of an array or a collection of elements such as a list or a vector. It is a more concise and readable way to iterate through the elements of an array or a collection. The syntax of a range-based for loop is as follows: