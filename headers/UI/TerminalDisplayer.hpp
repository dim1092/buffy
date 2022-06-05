//
// Created by dimde on 6/4/2022.
//

#ifndef BUFFY_TERMINALDISPLAYER_HPP
#define BUFFY_TERMINALDISPLAYER_HPP


#include "../simulation/Field.hpp"

class TerminalDisplayer {
//   const Symbol*** map;
public:
   TerminalDisplayer(const Field& field);
   void displayField(const Field& field) const;
};


#endif //BUFFY_TERMINALDISPLAYER_HPP
