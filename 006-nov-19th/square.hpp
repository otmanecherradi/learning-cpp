//
//  square.hpp
//  006-nov-19th
//

#ifndef square_hpp
#define square_hpp

#include "rectangle.hpp"

class Square : public Rectangle {
    
public:
    Square(double w) : Rectangle("square", w, w) {}
};


#endif /* square_hpp */
