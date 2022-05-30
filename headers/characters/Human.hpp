

#ifndef BUFFY_HUMAN_HPP
#define BUFFY_HUMAN_HPP

#include "Character.hpp"

/**
 * Implementation of Character class to represent a defenseless human
 * @author De Bleser Dimitri
 * @author Vincent Peer
 */
class Human : public Character {
   static const Color* COLOR;
   static const char SYMBOL;
public:
   Human();
   Human(Position);
   const Color* getColor() const override;
   char getSymbol() const override;

};


#endif //BUFFY_HUMAN_HPP
