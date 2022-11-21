//
//  shape.hpp
//  006-nov-19th
//

#ifndef shape_hpp
#define shape_hpp

#include <string>

class Shape {
private:
    std::string type;
    
protected:
    Shape(std::string t) { type = t; }
    
public:
    virtual double area() = 0;
    virtual double circumference() = 0;
    
    virtual std::string get_type() {
        return type;
    }
};

#endif /* shape_hpp */
