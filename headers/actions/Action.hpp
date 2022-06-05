//
// Created by dimde on 6/1/2022.
//

#ifndef BUFFY_ACTION_HPP
#define BUFFY_ACTION_HPP

class Humanoid;

#include "../simulation/Field.hpp"

class Action {
protected:
   Action() = default;
public:
   virtual ~Action() = default;
   virtual void execute(Humanoid* h, Field& field) const = 0;
};


#endif //BUFFY_ACTION_HPP
