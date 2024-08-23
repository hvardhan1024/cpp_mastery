#include <iostream>
#include <string>

// function demonstrating chaining std::cin
void gatherDetails(){
    int age;
    std::string name;

    std::cout<< "Please type in your Last name and age, seperated by spaces : "<<std::endl;
    std::cin>>name>>age; // Input name and age
    std::cout<<"Hello "<<name<<"! You are "<<age<<"years old."<<std::endl;
}

// int main(){
//     // READING DATA 
//     int age; 
//     std::string name;
//     std::cout<<"Please type in your Last name : "<<std::endl;
//     std::cin>>name;

//     std::cout<<"Please type in your age : "<<std::endl;
//     std::cin>>age;
//     std::cout<<"Hello "<<name<<"! You are "<<age<<" years old "<<std::endl;

//     std::cout<<"Calling gatherData function to demonstrate input chaining"<<std::endl;
//     gatherDetails();

//     std::cout<<"#################"<<std::endl;
//     // ##########################################################
//     // PRINTING DATA
//     std::cout<<"Hello World!"<<std::endl;

//     int age2 {21};
//     std::cout<<"The age is : "<<age2<<std::endl;

//     // Error
//     std::cerr<<  "std::cerr output : Something went wrong"<<std::endl;

//     // Log message
//     std::clog << "std::clog output : This is a log message"<<std::endl;
// }

int main(){
    std::cout<<"Getline demonstration "<<std::endl;
    std::string full_name;
    int age;

    std::cout<<"Please type in your full name here: "<<std::endl;
    std::getline(std::cin,full_name);
    std::cin>>age;

    std::cout<<"Hello "<<full_name<<"!, You are "<<age<<" years old"<<std::endl;
    return 0;
}