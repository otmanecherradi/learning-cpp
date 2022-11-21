//
//  rectangle.hpp
//  006-nov-19th
//

#ifndef rectangle_hpp
#define rectangle_hpp

#include <string>

#include "shape.hpp"

class Rectangle : public Shape {
protected:
    double width;
    double length;

    explicit Rectangle(std::string t, double w, double l) : Shape(t) {
        width = w;
        length = l;
    }
    
public:
    Rectangle(double w, double l) : Shape("rectangle") {
        width = w;
        length = l;
    }
    
    double area() {
        return width * length;
    };
    double circumference() {
        return 2 * (width + length);
    };
};

#endif /* rectangle_hpp */
