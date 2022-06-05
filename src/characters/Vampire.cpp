

#include "../../headers/characters/Vampire.hpp"
#include "../../headers/actions/Kill.hpp"
#include "../../headers/actions/Chase.hpp"

const Symbol* Vampire::SYMBOL =  &Symbol::VAMPIRE;

Vampire::Vampire(size_t posX, size_t posY) : Humanoid(posX, posY) {
}

Vampire::Vampire(const Humanoid& h) : Humanoid(h.posX(), posY()) {
}

const Symbol* Vampire::symbol() const {
   return SYMBOL;
}

void Vampire::setAction(const Field &field) {
   Humanoid* closest = field.getClosest(this, &Symbol::HUMAN);
   if (closest == nullptr)
      return;
   else if (distance(closest) == 1)
      updateAction(new Kill(closest));
   else
      updateAction(new Chase(closest));
}


