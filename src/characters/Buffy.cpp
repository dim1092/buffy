

#include "../../headers/characters/Buffy.hpp"
#include "../../headers/actions/Kill.hpp"
#include "../../headers/actions/Chase.hpp"
#include "../../headers/actions/RandMove.hpp"

const Symbol* Buffy::SYMBOL =  &Symbol::BUFFY;

Buffy::Buffy(int posX, int posY) : Humanoid(posX, posY) {
}

const Symbol* Buffy::symbol() const{
   return SYMBOL;
}

void Buffy::setAction(const Field& field) {
   Humanoid* closest = field.getClosest(this, &Symbol::VAMPIRE);
   if (closest == nullptr)
      updateAction(new RandMove());
   else if (distance(closest) <= 1)
      updateAction(new Kill(closest));
   else
      updateAction(new Chase(closest));
}

