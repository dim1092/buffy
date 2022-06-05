//
// Created by dimde on 5/30/2022.
//

#include "../../headers/utils/Symbol.hpp"

Symbol::Symbol(const char *symbol, const char* color) : SYMBOL(symbol), COLOR(color) {
}

const Symbol Symbol::VAMPIRE("v", "\033[34m"), // \033[34m for blue
             Symbol::BUFFY("B", "\033[33m"), // \033[33m for yellow
             Symbol::HUMAN("h", "\033[35m");

std::string Symbol::toString() const {
   std::string s = COLOR;
   s.append( " ");
   s.append( SYMBOL);
   return s;
}
// \033[35m for magenta