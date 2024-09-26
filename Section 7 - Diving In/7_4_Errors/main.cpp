#include <iostream>

int main() {
    // 1. Compile Time Error: Skipping a semicolon will result in a compile-time error.
    // These errors can be seen in the Problems tab.
    // You won't get a binary executable file if there is a compile-time error.
    // std::cout << "Hello World!" << std::endl  // Missing semicolon

    // 2. Runtime Error and Warning
    // These can be seen in the Problems tab.
    // Code starts here
    std::cout << "Hello World!" << std::endl;
    int value = 7 / 0;  // Division by zero causes runtime error and warning
    std::cout << "Value is: " << value << std::endl;
    // Code ends here
    
    // You will get a binary file in this case with a WARNING like this:
    /*
    C:\Users\harvy\Desktop\cpp_kagwaya\SEC7_Diving_in\7_4_Errors\main.cpp:13:18: warning: division by zero [-Wdiv-by-zero]
   13 |     int value = 7 / 0;
    */
    // Although you can execute the binary file, the intended output will not be obtained.
    // In this case, it will not print the "value".

    return 0;
}
