//
//  circle.hpp
//  003-nov-5th
//

#ifndef circle_hpp
#define circle_hpp

#include <string>

#include "point.hpp"

class Circle
{
private:
  Point center;
  float radius;

public:
  Circle();
  Circle(Point center, float radius);

  Point get_center();
  float get_radius();

  std::string to_string();
};

#endif /* circle_hpp */
