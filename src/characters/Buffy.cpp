

#include "../../headers/characters/Buffy.hpp"

const Color* Buffy::COLOR =  &Color::YELLOW;
const char Buffy::SYMBOL = 'B';

const Color *Buffy::getColor() const {
   return COLOR;
}

char Buffy::getSymbol() const {
   return SYMBOL;
}
