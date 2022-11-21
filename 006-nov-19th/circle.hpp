//
//  circle.hpp
//  006-nov-19th
//

#ifndef circle_hpp
#define circle_hpp

#include <math.h>
#include <string>

#include "shape.hpp"

class Circle : public Shape {
private:
    double radius;
    
public:
    Circle(double r) : Shape("circle") {
        radius = r;
    }
    
    double area() {
        return M_PI * radius * radius;
    };
    double circumference() {
        return 2 * M_PI * radius;
    };
};

#endif /* circle_hpp */
