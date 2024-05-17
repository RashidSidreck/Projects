#include <iostream>
#include "Rectangle.hpp"

int main() {
   
    Rectangle rect;

   
    float length, width;
  std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    
    rect.setLength(length);
    rect.setWidth(width);

    
    std::cout << "The area of the rectangle is: " << rect.area() << std::endl;

    return 0;
}
