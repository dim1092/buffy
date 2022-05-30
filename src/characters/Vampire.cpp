

#include "../../headers/characters/Vampire.hpp"

const Color* Vampire::COLOR =  &Color::PURPLE;
const char Vampire::SYMBOL = 'v';

const Color* Vampire::getColor() const {
   return COLOR;
}

char Vampire::getSymbol() const {
   return SYMBOL;
}