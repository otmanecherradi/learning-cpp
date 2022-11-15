//
//  main.cpp
//  004-nov-12th
//

#include <iostream>

#include "point.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    Point table_of_points[4];

    for (int idx = 0; idx < 4; idx++)
        cout << table_of_points[idx].to_string() << endl;

    Point *table_of_pointers[4];
    table_of_pointers[0] = new Point();
    table_of_pointers[1] = new Point();
    table_of_pointers[2] = new Point();
    table_of_pointers[3] = new Point();
    for (int idx = 0; idx < 4; idx++)
        cout << table_of_pointers[idx]->to_string() << endl;

    Point *pointer = new Point[4];
    for (int idx = 0; idx < 4; idx++)
        cout << pointer[idx].to_string() << endl;

    return 0;
}
