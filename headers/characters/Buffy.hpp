
#ifndef BUFFY_BUFFY_HPP
#define BUFFY_BUFFY_HPP

class Field;

#include "Humanoid.hpp"

/**
 * Implementation of Humanoid class to represent the character buffy the vampire slayer
 * @author De Bleser Dimitri
 * @author Vincent Peer
 */
class Buffy : public Humanoid {
   static const Symbol* SYMBOL;
   static const unsigned MOVE_RANGE = 2;
   bool canMove(int offsetX, int offsetY, const Field& field) override;
public:
   Buffy(int posX, int posY);
   ~Buffy() = default;
   void setAction(const Field &field) override;
   const Symbol* symbol() const override;
   unsigned moveRange() const override;
};


#endif //BUFFY_BUFFY_HPP
