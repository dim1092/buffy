

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
   /**
    * Constructor
    * @param posX
    * @param posY
    */
   Humanoid(int posX, int posY);

   /**
    * Sets the next action to be performed
    * @param action
    */
   void updateAction(Action* action);

   /**
    * Checks if this Humanoid can move to the given position
    * @param offsetX
    * @param offsetY
    * @param field
    * @return true if allowed
    */
   virtual bool canMove(int offsetX, int offsetY, const Field& field);
public:
   virtual ~Humanoid();

   /**
    * Move the humanoid within field borders
    * @param offsetX horizontal movement length
    * @param offsetY vertical movement length
    * @param field containing the Humanoid
    */
   virtual void move(int offsetX, int offsetY, const Field& field);

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

   /**
    * @return Max step range per turn
    */
   virtual unsigned moveRange() const = 0;
};


#endif //BUFFY_HUMANOID_HPP
