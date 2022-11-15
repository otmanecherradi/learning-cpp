//
//  main.cpp
//  003-nov-5th
//

#include <iostream>

#include "point.hpp"
#include "circle.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // Point p = Point(10, 10);
    Point pI(10);

    Point p(10, 12);

    cout << p.to_string() << endl;

    Point *pp = new Point(10, 12);
    cout << pp->to_string() << endl;

    Circle c(Point(10, 10), 10);

    cout << c.to_string() << endl;
}
