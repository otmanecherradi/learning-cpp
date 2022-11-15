//
//  person.cpp
//  005-nov-13th
//

#include <ostream>
#include <sstream>

#include "person.hpp"

long Person::nbr_person = 0;

Person::Person()
{
  nbr_person += 1;

  this->id = "P" + std::to_string(10000 + nbr_person);
}

Person::Person(std::string name)
{
  nbr_person += 1;

  this->id = "P" + std::to_string(10000 + nbr_person);
  this->name = name;
}

std::string Person::get_id()
{
  return id;
}

std::string Person::get_name()
{
  return name;
}

void Person::set_name(std::string name)
{
  this->name = name;
}

long Person::get_count()
{
  return nbr_person;
}

std::string Person::to_string() const {
    std::stringstream ss;
    ss << "Person { ";
    ss << id;
    ss << " ; ";
    ss << name;
    ss << " }";

    return ss.str();
}

std::ostream &operator<<(std::ostream &out, const Person &person)
{
  out << "Person { ";
  out << person.id;
  out << " ; ";
  out << person.name;
  out << " }";
  return out;
}
