#include <iostream>

int main(){

    //1. Compile time error : skipping a semicolon will result in compile time errror
    //These can be seen in the problems tab 
    // you wont get a binary executable file if there is compile time error
    // std::cout<<"Hello World !"<<std::endl 

    //2.,3. Run time error and warning
    //These can be seen in the problems tab 
    //code start
    std::cout<<"Hello World !"<<std::endl ;
    int value = 7/0;
    std::cout<<"Value is: "<< value << std::endl;
    //code end
    // You will get a binary file in this case with a  WARNING like this
    /*
    C:\Users\harvy\Desktop\cpp_kagwaya\SEC7_Diving_in\7_4_Errors\main.cpp:13:18: warning: division by zero [-Wdiv-by-zero]
   13 |     int value = 7/0;
    */
   // But you can execute the binary file but intended output will not be obtained
    // in this case it will not print the "value" 



    return 0;
}