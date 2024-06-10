#include "Polygon.hpp"


Polygon::Polygon() : mWidth(0), mHeight(0) {}


void Polygon::SetValues(int width, int height) {
    mWidth = width;
    mHeight = height;
}


std::string Polygon::GetValueWidth() const {
    return std::to_string(mWidth);
}


std::string Polygon::GetValueHeight() const {
    return std::to_string(mHeight);
}
