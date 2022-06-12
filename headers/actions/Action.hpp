//
// Created by dimde on 6/1/2022.
//

#ifndef BUFFY_ACTION_HPP
#define BUFFY_ACTION_HPP

class Humanoid;

#include "../simulation/Field.hpp"

/**
 * Abstract class to define an action which can be performed by a Humanoid
 * @author De Bleser dimitri
 * @author Peer Vincent
 */
class Action {
protected:
   Action() = default;
public:
   virtual ~Action() = default;

   /**
    * defines the action to be executed
    * @param h Humanoid performing the action
    * @param field containing the humanoids
    */
   virtual void execute(Humanoid* h, Field& field) const = 0;
};


#endif //BUFFY_ACTION_HPP
