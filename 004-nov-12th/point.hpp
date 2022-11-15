//
//  point.hpp
//  003-nov-5th
//

#ifndef point_hpp
#define point_hpp

#include <string>

class Point
{
private:
    float x;
    float y;

public:
    Point();
    Point(float xy);
    Point(float x, float y);

    float get_x();
    float get_y();

    std::string to_string();
};

#endif /* point_hpp */
