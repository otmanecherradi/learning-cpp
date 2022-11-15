//
//  superhero.hpp
//  005-nov-13th
//

#ifndef superhero_hpp
#define superhero_hpp

#include <string>
#include <ostream>

#include "person.hpp"

class Superhero : public Person
{

protected:
  std::string nickname;

public:
  Superhero(std::string, std::string);

  std::string get_nickname();
  void set_nickname(std::string);

  friend std::ostream &operator<<(std::ostream &out, const Superhero &hero);
};

#endif /* superhero_hpp */
