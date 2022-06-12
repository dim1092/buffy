//
// Created by dimde on 6/2/2022.
//

#ifndef BUFFY_CHASE_HPP
#define BUFFY_CHASE_HPP


#include "ActOn.hpp"

/**
 * Implementation onf an ActOn Action to represent moving towards an other Humanoid
 * @author De Bleser Dimitri
 * @author Peer Vincent
 */
class Chase : public ActOn {
public:
   Chase(Humanoid* h);

   /**
   * Executes the action. Move towards an other Humanoid
   * @param h Humanoid performing the action
   * @param field containing the humanoids
   */
   void execute(Humanoid* h, Field& field) const override;
};


#endif //BUFFY_CHASE_HPP
