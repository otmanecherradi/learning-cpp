//
//  main.cpp
//  007-nov-26th
//

#include <iostream>
#include <list>

#include "person.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    list<Person> persons;
    
    persons.push_back(Person("Tony Stark"));
    persons.push_back(Person("Natasha Romanoff"));
    persons.push_back(Person("Stephen Strange"));
    
    Person steve("Steve Rogers");
    persons.push_back(steve);
    
    persons.push_back(Person("Nick Fury"));

    list<Person>::iterator it;
    
    for(it = persons.begin(); it != persons.end(); it++) {
        cout << *it << endl;
    }
    
    persons.remove(steve);

    cout << "== After remove ==" << endl;
    
    for(it = persons.begin(); it != persons.end(); it++) {
        cout << *it << endl;
    }
    
    persons.sort();
    
    cout << "== After sort ==" << endl;
    
    for(it = persons.begin(); it != persons.end(); it++) {
        cout << *it << endl;
    }
    
    string code = "P10001";
    
    cout << "== Find person with " << code << " ==" << endl;
    
    for(it = persons.begin(); it != persons.end(); it++) {
        if(it->get_id() == code)
            cout << *it << endl;
    }

    return 0;
}
