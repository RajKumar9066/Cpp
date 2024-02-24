#include <iostream>

int main() {
    int myArray[5] = {1, 2, 3, 4, 5};
    int i = 0;

    // While loop to access array elements
    while (i < 5) {
        std::cout << "Array element at index " << i << ": " << myArray[i] << std::endl;
        i++;
    }

    std::cout << std::endl;

    i = 0;

    // Do-while loop to access array elements
    do {
        std::cout << "Array element at index " << i << ": " << myArray[i] << std::endl;
        i++;
    } while (i < 5);

    return 0;
}
//difference between while and do-while loop is that while loop checks the condition first and then executes the code inside the loop, whereas do-while loop executes the code first and then checks the condition.