//
// Created by dimde on 5/30/2022.
//

#ifndef BUFFY_SYMBOL_HPP
#define BUFFY_SYMBOL_HPP
#include <string>

/**
 * Class to implement enums containing Symbols for our concrete Humanoids
 * @author De Bleser Dimitri
 * @author Peer Vincent
 */
class Symbol {
   const char* SYMBOL;
   const char* COLOR;

   /**
    * Class constructor
    * @param symbol character to represent the Humanoid
    * @param color color to represent the Humanoid
    */
   Symbol(const char* symbol, const char* color);

   
   Symbol(const Symbol&) = delete;
   bool operator=(const Symbol&) = delete;
public :
   static const Symbol BUFFY, VAMPIRE, HUMAN;

   /**
    * @return string to represent a humanoid with its specific color
    */
   std::string toString()const;
};

#endif //BUFFY_SYMBOL_HPP
