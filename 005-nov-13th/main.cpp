//
//  main.cpp
//  005-nov-13th
//

#include <iostream>

#include "person.hpp"
#include "superhero.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << Person::get_count() << endl;

    Superhero tony("Tony Stark", "Iron man");
    cout << tony << endl;
    Superhero natasha("Natasha Romanoff", "Black Widow");
    cout << natasha << endl;

    cout << Person::get_count() << endl;

    Person stephen;
    stephen.set_name("Stephen Strange");
    cout << stephen << endl;

    cout << Person::get_count() << endl;
    
    return 0;
}
