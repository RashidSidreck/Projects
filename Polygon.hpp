#pragma once
#include <string>

class Polygon {
protected:
    int mWidth;
    int mHeight;
public:
 
    Polygon();


    void SetValues(int width, int height);

   
    std::string GetValueWidth() const;
    std::string GetValueHeight() const;
};
