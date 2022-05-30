
#ifndef BUFFY_BUFFY_HPP
#define BUFFY_BUFFY_HPP


#include "Character.hpp"

/**
 * Implementation of killer class to represent the character buffy the vampire slayer
 * @author De Bleser Dimitri
 * @author Vincent Peer
 */
class Buffy : public Character {
   static const Color* COLOR;
   static const char SYMBOL;
public:
   const Color* getColor() const override;
   char getSymbol() const override;
};


#endif //BUFFY_BUFFY_HPP
