//
// Created by dimde on 6/1/2022.
//

#ifndef BUFFY_BITE_HPP
#define BUFFY_BITE_HPP


#include "ActOn.hpp"

/**
 * Implementation onf an ActOn Action to represent a Vampire's Bite
 * @author De Bleser Dimitri
 * @author Peer Vincent
 */
class Bite : public ActOn {
public:

   Bite(Humanoid* h);

   /**
    * Executes the action. Transform or kill the victim
    * @param h Humanoid performing the action
    * @param field containing the humanoids
    */
   void execute(Humanoid* h, Field& field) const override;
};


#endif //BUFFY_BITE_HPP
