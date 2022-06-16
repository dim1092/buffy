

#ifndef BUFFY_VAMPIRE_HPP
#define BUFFY_VAMPIRE_HPP

#include "Humanoid.hpp"

/**
 * Implementation of killer class to represent the character vampire
 * @author De Bleser Dimitri
 * @author Vincent Peer
 */
class Vampire : public Humanoid {
   static const Symbol* SYMBOL;
   static const unsigned MOVE_RANGE = 1;
public:
   Vampire(int posX, int posY);
   Vampire(const Humanoid& h);
   ~Vampire() = default;
   void setAction(const Field &field) override;
   const Symbol* symbol() const override;
   unsigned moveRange() const override;
};


#endif //BUFFY_VAMPIRE_HPP
