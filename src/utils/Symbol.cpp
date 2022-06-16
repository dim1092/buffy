//
// Created by dimde on 5/30/2022.
//

#include "../../headers/utils/Symbol.hpp"

const Symbol Symbol::VAMPIRE{"v", "\033[34m"}, // \033[34m for blue
             Symbol::BUFFY("B", "\033[33m"), // \033[33m for yellow
             Symbol::HUMAN("h", "\033[35m"); // \033[35m for magenta

Symbol::Symbol(const char *symbol, const char* color) : SYMBOL(symbol), COLOR(color) {
}

   std::string Symbol::toString() const {
      std::string s = COLOR;
      s.append(SYMBOL);
      s.append("\033[0m"); // resetting color
      return s;
   }
