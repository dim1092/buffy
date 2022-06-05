

#ifndef BUFFY_HUMANOID_HPP
#define BUFFY_HUMANOID_HPP

class Field;
class Action;

#include "../utils/Symbol.hpp"
#include "../simulation/Field.hpp"
#include "../actions/Action.hpp"

class Humanoid {
   int _posX, _posY;
   bool _isAlive;
   Action* _action;

protected:
   Humanoid(size_t posX, size_t posY);
   void updateAction(Action* action);

public:
   virtual ~Humanoid() = default;
   void move(int offsetX, int offsetY, const Field& field);
   virtual const Symbol* symbol() const = 0;
   virtual void setAction(const Field& field) = 0;
   void executeAction(Field& field);
   void kill();
   bool isAlive() const;
   size_t posX() const;
   size_t posY() const;
   unsigned distance(const Humanoid* h) const;
};


#endif //BUFFY_HUMANOID_HPP
