
#ifndef BUFFY_KILLER_HPP
#define BUFFY_KILLER_HPP


#include "Character.hpp"

class Killer : public Character{

protected:
   Killer(const Position& pos);

public:
   void kill(const Character& c) const;
};


#endif //BUFFY_KILLER_HPP
