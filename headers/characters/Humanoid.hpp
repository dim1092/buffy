

#ifndef BUFFY_HUMANOID_HPP
#define BUFFY_HUMANOID_HPP

class Field;
class Action;

#include "../utils/Symbol.hpp"
#include "../simulation/Field.hpp"
#include "../actions/Action.hpp"

/**
 * Abstract class to represent Game characters
 * @author De Bleser Dimitri
 * @author Peer Vincent
 */
class Humanoid {
   int _posX, _posY;
   bool _isAlive;
   Action* _action;

protected:
   Humanoid(int posX, int posY);
   void updateAction(Action* action);

public:
   virtual ~Humanoid();

   /**
    * Move the humanoid
    * @param offsetX horizontal movement length
    * @param offsetY vertical movement length
    * @param field containing the Humanoid
    */
   void move(int offsetX, int offsetY, const Field& field);

   /**
    * @return Symbol representing the class
    */
   virtual const Symbol* symbol() const = 0;

   /**
    * Defines the action to be executed according to its surroundings
    * @param field containing the Humanoid
    */
   virtual void setAction(const Field& field) = 0;

   /**
   * Executes the action to be executed according to its surroundings
   * @param field containing the Humanoid
   */
   void executeAction(Field& field);

   /**
    * Sets the Humanoid as dead
    */
   void kill();

   /**
    * @return true if the Humanoid is set as alive
    */
   bool isAlive() const;

   /**
    * @return x coordinate of the Humanoid
    */
   int posX() const;

   /**
   * @return y coordinate of the Humanoid
   */
   int posY() const;

   /**
    * @param h an other Humanoid
    * @return The distance of this Humanoid the the other
    */
   unsigned distance(const Humanoid* h) const;
};


#endif //BUFFY_HUMANOID_HPP
