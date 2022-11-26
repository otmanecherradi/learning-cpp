//
//  person.hpp
//  007-nov-26th
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

    std::string get_id() const;
    std::string get_name() const;
    void set_name(std::string);
    
    std::string to_string() const;

    friend std::ostream& operator<<(std::ostream& out, const Person& person);
    friend bool operator==(const Person& first, const Person& second);
    friend bool operator<(const Person& first, const Person& second);
};

#endif /* person_hpp */
