
#ifndef BUFFY_HUMAN_HPP
#define BUFFY_HUMAN_HPP

class Field;
#include "Humanoid.hpp"

/**
 * Implementation of Humanoid class to represent a defenseless human
 * @author De Bleser Dimitri
 * @author Vincent Peer
 */
class Human : public Humanoid {
   static const Symbol* SYMBOL;
   static const unsigned MOVE_RANGE = 1;

public:
   Human(int posX, int posY);
   ~Human() = default;
   void setAction(const Field &field) override;
   const Symbol* symbol() const override;
   unsigned moveRange() const override;
};


#endif //BUFFY_HUMAN_HPP
