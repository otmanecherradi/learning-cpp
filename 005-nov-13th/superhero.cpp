//
//  superhero.cpp
//  005-nov-13th
//

#include <ostream>
#include <string>

#include "superhero.hpp"

Superhero::Superhero(std::string name, std::string nickname) : Person(name)
{
  this->nickname = nickname;
}

std::string Superhero::get_nickname()
{
  return nickname;
}

void Superhero::set_nickname(std::string nickname)
{
  this->nickname = nickname;
}

std::ostream &operator<<(std::ostream &out, const Superhero &hero)
{
    out << "Superhero { ";
    out << hero.Person::to_string();
    out << " ; ";
    out << hero.nickname;
    out << " }";
    return out;
}
