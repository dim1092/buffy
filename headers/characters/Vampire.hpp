

#ifndef BUFFY_VAMPIRE_HPP
#define BUFFY_VAMPIRE_HPP


#include "../utils/Symbol.hpp"
#include "Humanoid.hpp"

/**
 * Implementation of killer class to represent the character vampire
 * @author De Bleser Dimitri
 * @author Vincent Peer
 */
class Vampire : public Humanoid {
   static const Symbol* SYMBOL;

public:
   Vampire(size_t posX, size_t posY);
   Vampire(const Humanoid& h);
   ~Vampire() = default;
   void setAction(const Field &field) override;
   const Symbol* symbol() const override;
};


#endif //BUFFY_VAMPIRE_HPP
