

#ifndef BUFFY_CHARACTER_HPP
#define BUFFY_CHARACTER_HPP

#include "../utils/Position.hpp"
#include "../utils/Color.hpp"

class Character {
   Position pos;
protected:
   Character(const Position& pos);
public:
   virtual ~Character() = default;
   void move(const Position& newPos);
   virtual char getSymbol() const = 0;
   virtual const Color* getColor() const = 0;
};


#endif //BUFFY_CHARACTER_HPP
