//
// Created by dimde on 6/1/2022.
//

#ifndef BUFFY_ACTON_HPP
#define BUFFY_ACTON_HPP


#include "../characters/Humanoid.hpp"
#include "Action.hpp"

class ActOn : public Action {
   Humanoid* victim;
protected:
   ActOn(Humanoid* h);
   Humanoid* getVictim() const;
};


#endif //BUFFY_ACTON_HPP
