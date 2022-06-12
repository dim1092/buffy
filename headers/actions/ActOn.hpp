//
// Created by dimde on 6/1/2022.
//

#ifndef BUFFY_ACTON_HPP
#define BUFFY_ACTON_HPP


#include "../characters/Humanoid.hpp"
#include "Action.hpp"

/**
 * Abstract class specifying an Action acted upon an other Humanoid
 * @author De bleser Dimitri
 * @author Peer vincent
 */
class ActOn : public Action {
   Humanoid* const victim;
protected:
   /**
    * Constructor of class
    * @param h Humanoid on which the action will be acted on
    */
   ActOn(Humanoid* victim);

   /**
    * @return The victim of the action
    */
   Humanoid* getVictim() const;
};


#endif //BUFFY_ACTON_HPP
