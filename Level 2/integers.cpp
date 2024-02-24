// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Size of int: " << sizeof(int) << " bytes" << endl;
//     cout << "Size of short: " << sizeof(short) << " bytes" << endl;
//     cout << "Size of long: " << sizeof(long) << " bytes" << endl;
//     cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;
//     cout << "Size of char: " << sizeof(char) << " byte" << endl;
//     cout << "Size of bool: " << sizeof(bool) << " byte" << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
  int hexNumber = 0x1F; // Hexadecimal number
    int binaryNumber = 0b101010; // Binary number

    cout << "Direct use of hexadecimal number: " << hexNumber << endl;
    cout << "Direct use of binary number: " << binaryNumber << endl;

    int decimalFromHex = hexNumber; // Conversion from hexadecimal to decimal
    int decimalFromBinary = binaryNumber; // Conversion from binary to decimal

    cout << "Conversion from hexadecimal to decimal: " << decimalFromHex << endl;
    cout << "Conversion from binary to decimal: " << decimalFromBinary << endl;

    return 0;
}