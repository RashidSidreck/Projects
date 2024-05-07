#include <iostream>
#include <string>

int main() {
    
    int* pInteger = new int;

    std::string* pString = new std::string;

    std::cout << "Please enter an integer: ";
    std::cin >> *pInteger;
    std::cin.ignore();

    std::cout << "Please enter a string: ";
    std::getline(std::cin, *pString);

    std::cout << "The value of the dynamically allocated integer is: " << *pInteger << std::endl;
    std::cout << "The value of the dynamically allocated string is: " << *pString << std::endl;

    delete pInteger;
    delete pString;

    return 0;
}
