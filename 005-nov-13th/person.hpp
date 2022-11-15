//
//  person.hpp
//  005-nov-13th
//

#ifndef person_hpp
#define person_hpp

#include <string>
#include <ostream>

class Person
{
protected:
    std::string id;
    std::string name;

    static long nbr_person;

public:
    Person();
    explicit Person(std::string);

    std::string get_id();
    std::string get_name();
    void set_name(std::string);
    
    std::string to_string() const;

    static long get_count();

    friend std::ostream &operator<<(std::ostream &out, const Person &person);
};


#endif /* person_hpp */
