
#ifndef BUFFY_RANDMOVE_HPP
#define BUFFY_RANDMOVE_HPP


#include "Action.hpp"

/**
 * Implementation onf an Action to represent a random move in a field
 * @author De Bleser Dimitri
 * @author Peer Vincent
 */
class RandMove : public Action {

public:
   RandMove();

   /**
   * Executes the action. Random move
   * @param h Humanoid performing the action
   * @param field containing the humanoids
   */
   void execute(Humanoid* h, Field& field) const override;
};


#endif //BUFFY_RANDMOVE_HPP
