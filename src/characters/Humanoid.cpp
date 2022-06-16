
#include "../../headers/characters/Humanoid.hpp"

#include <cmath>

using namespace std;
Humanoid::Humanoid(int posX, int posY) : _posX(posX), _posY(posY), _isAlive(true), _action(nullptr) {
}

Humanoid::~Humanoid() {
   delete _action; // might not have been deleted if action wasn't performed
}

void Humanoid::move(int offsetX, int offsetY, const Field& field) {

   if (!canMove(_posX + offsetX, _posY + offsetY, field))
      return;

   // Limit to field borders
   _posX = max(0, min((int) field.width() - 1, _posX + offsetX));
   _posY = max(0, min((int) field.height() - 1, _posY + offsetY));
}

bool Humanoid::isAlive() const {
   return _isAlive;
}

void Humanoid::kill() {
   _isAlive = false;
}

int Humanoid::posX() const {
   return _posX;
}

int Humanoid::posY() const {
   return _posY;
}

void Humanoid::updateAction(Action *action) {
   _action = action;
}

void Humanoid::executeAction(Field &field) {
   if (_action != nullptr) {
      _action->execute(this, field);
      delete _action;
      _action = nullptr;
   }
}

unsigned Humanoid::distance(const Humanoid* h) const {
   return (unsigned) sqrt(pow((double) _posX - (double) h->_posX, 2) + pow((double) _posY - (double) h->_posY, 2));
}

bool Humanoid::canMove(int offsetX, int offsetY, const Field &field) {
   return field.isPosFree(_posX + offsetX, _posY + offsetY);
}




