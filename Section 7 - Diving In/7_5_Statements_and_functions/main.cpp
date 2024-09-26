#include <iostream>

//function 1
int addNumbers(int first_param, int second_param){
    int sum = first_param + second_param;
    return sum;
}

//Exercise
int mulNumbers(int num1,int num2){
    return num1*num2;
}

int main(int argc, char **argv){
    //statement 1
    int firstNumber {12};


    //statement 2
    int secondNumber {7}; 

    //statement 3 and so on
    std::cout<<"The firstNumber is :"<<firstNumber<<std::endl;
    std::cout<<"The secondNumber is :"<<secondNumber<<std::endl;

    int sum = firstNumber + secondNumber;
    std::cout << "The sum of the two numbers is : " << sum << std::endl;


    //calling the function addNumbers and storing the result in sum
    sum = addNumbers(firstNumber,secondNumber);
    std::cout << "The sum of the two numbers is : " << sum << std::endl;

    sum = addNumbers(50,100);
    std::cout << "The sum of the two numbers is : " << sum << std::endl;

    //Using functions without storing it any variable 
    std::cout << "The sum2 of the two numbers is : " << addNumbers(24,4) << std::endl;

    
    //Exercise
    std::cout<<"The multiplication of "<<firstNumber<<" and "<<secondNumber<<" is ";
    std::cout<<mulNumbers(firstNumber,secondNumber)<<std::endl;

    return 0;
} 