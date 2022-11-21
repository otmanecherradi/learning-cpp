//
//  main.cpp
//  006-nov-19th
//

#include <iostream>
#include <vector>

#include "circle.hpp"
#include "rectangle.hpp"
#include "square.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    {
        // inheritance
        
        Circle c(10);
        cout << "shape is a " << c.get_type();
        cout << " with an area of " << c.area();
        cout << " and a circumference of " << c.circumference() << endl;
        
        
        Rectangle r(10, 20);
        cout << "shape is a " << r.get_type();
        cout << " with an area of " << r.area();
        cout << " and a circumference of " << r.circumference() << endl;

        Square s(10);
        cout << "shape is a " << s.get_type();
        cout << " with an area of " << s.area();
        cout << " and a circumference of " << s.circumference() << endl;
    }
    
    {
        // vectors
        
        vector<Shape*> list;
        list.push_back(new Circle(10));
        list.push_back(new Rectangle(10, 20));
        list.push_back(new Square(10));
        
        cout << "LOOP" << endl;
        for (int idx=0; idx < list.size(); idx+=1) {
            cout << "shape is a " << list.at(idx)->get_type();
            cout << " with an area of " << list.at(idx)->area();
            cout << " and a circumference of " << list.at(idx)->circumference() << endl;
        }
    }
    
    return 0;
}
