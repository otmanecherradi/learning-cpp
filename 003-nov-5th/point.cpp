//
//  point.cpp
//  003-nov-5th
//

#include <string>
#include <sstream>

#include "point.hpp"

using namespace std;

Point::Point()
{

  x = y = 10;
}

Point::Point(float xy)
{
  x = y = xy;
}

Point::Point(float x, float y)
{
  this->x = x;
  this->y = y;
}

float Point::get_x()
{
  return x;
}

float Point::get_y()
{
  return y;
}

string Point::to_string()
{
  stringstream ss;
  ss << "P { ";
  ss << x;
  ss << " ; ";
  ss << y;
  ss << " }";

  return ss.str();
}

