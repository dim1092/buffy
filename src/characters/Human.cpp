

#include "../../headers/characters/Human.hpp"

const Color* Human::COLOR =  &Color::BLUE;
const char Human::SYMBOL = 'h';

const Color* Human::getColor() const {
   return COLOR;
}

char Human::getSymbol() const {
   return SYMBOL;
}
