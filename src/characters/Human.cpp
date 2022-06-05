

#include "../../headers/characters/Human.hpp"
#include "../../headers/actions/RandMove.hpp"

const Symbol* Human::SYMBOL =  &Symbol::HUMAN;

Human::Human(size_t posX, size_t posY) : Humanoid(posX, posY) {
}

const Symbol* Human::symbol() const {
   return SYMBOL;
}

void Human::setAction(const Field &field) {
   updateAction(new RandMove());
}
