

#ifndef BUFFY_VAMPIRE_HPP
#define BUFFY_VAMPIRE_HPP


#include "../utils/Color.hpp"
#include "Character.hpp"

/**
 * Implementation of killer class to represent the character a vampire
 * @author De Bleser Dimitri
 * @author Vincent Peer
 */
class Vampire : public Character {
   static const Color* COLOR;
   static const char SYMBOL;
public:
   const Color* getColor() const override;
   char getSymbol() const override;
};


#endif //BUFFY_VAMPIRE_HPP
