//
// Created by dimde on 5/30/2022.
//

#ifndef BUFFY_SYMBOL_HPP
#define BUFFY_SYMBOL_HPP
#include <string>

class Symbol {
   const char* SYMBOL;
   const char* COLOR;

   Symbol(const char* symbol, const char* color);
   Symbol(const Symbol&) = delete;
public :
   static const Symbol BUFFY, VAMPIRE, HUMAN;
   std::string toString()const;
};


#endif //BUFFY_SYMBOL_HPP
