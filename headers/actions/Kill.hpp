//
// Created by dimde on 6/1/2022.
//

#ifndef BUFFY_KILL_HPP
#define BUFFY_KILL_HPP


#include "Action.hpp"
#include "ActOn.hpp"

/**
 * Implementation onf an ActOn Action to represent killing a humanoid
 * @author De Bleser Dimitri
 * @author Peer Vincent
 */
class Kill : public ActOn {
public:
   Kill(Humanoid* h);

   /**
   * Executes the action. kill the victim
   * @param h Humanoid performing the action
   * @param field containing the humanoids
   */
   void execute(Humanoid* h, Field& field) const override;
};


#endif //BUFFY_KILL_HPP
