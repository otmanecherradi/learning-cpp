//
//  circle.cpp
//  003-nov-5th
//
//

#include <string>
#include <sstream>

#include "circle.hpp"

using namespace std;

Circle::Circle()
{
}

Circle::Circle(Point center, float radius)
{
  this->center = center;
  this->radius = radius;
}

Point Circle::get_center()
{
  return center;
}

float Circle::get_radius()
{
  return radius;
}

string Circle::to_string()
{
  stringstream ss;
  ss << "Circle { ";
  ss << center.to_string();
  ss << " ; ";
  ss << radius;
  ss << " }";

  return ss.str();
}

