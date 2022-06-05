
#ifndef BUFFY_BUFFY_HPP
#define BUFFY_BUFFY_HPP


#include "Humanoid.hpp"

/**
 * Implementation of killer class to represent the character buffy the vampire slayer
 * @author De Bleser Dimitri
 * @author Vincent Peer
 */
class Buffy : public Humanoid {
   static const Symbol* SYMBOL;
public:
   Buffy(size_t posX, size_t posY);
   ~Buffy() = default;
   void setAction(const Field &field) override;
   const Symbol* symbol() const override;
};


#endif //BUFFY_BUFFY_HPP
