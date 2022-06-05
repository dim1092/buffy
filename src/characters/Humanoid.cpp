
#include "../../headers/characters/Humanoid.hpp"

#include <cmath>

Humanoid::Humanoid(size_t posX, size_t posY) : _posX(posX), _posY(posY), _isAlive(true), _action(nullptr) {
}

void Humanoid::move(int offsetX, int offsetY, const Field& field) {

   // Limit to field borders
   if ((_posX == field.height() && offsetX > 0) || (_posX== 0 && offsetX < 0))
      offsetX = 0;
   if ((_posY == field.width() && offsetY > 0) || (_posY == 0 && offsetY < 0))
      offsetY = 0;

   _posX += offsetX;
   _posY += offsetY;
}

bool Humanoid::isAlive() const {
   return _isAlive;
}

void Humanoid::kill() {
   _isAlive = false;
}

size_t Humanoid::posX() const {
   return _posX;
}

size_t Humanoid::posY() const {
   return _posY;
}

void Humanoid::updateAction(Action *action) {
   if (_action != nullptr)
      delete _action;
   _action = action;
}

void Humanoid::executeAction(Field &field) {
   _action->execute(this, field);
}

unsigned Humanoid::distance(const Humanoid* h) const {
   return (unsigned) sqrt(pow(_posX - h->_posX, 2) + pow(_posY - h->_posY, 2));
}


