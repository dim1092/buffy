
#ifndef BUFFY_FIELD_HPP
#define BUFFY_FIELD_HPP

class Humanoid;

#include <list>
#include "../characters/Humanoid.hpp"


/**
 * Class representing the simulation's map containing humanoids
 * @author De Bleser Dimitri
 * @author Peer Vincent
 */
class Field {
   std::list<Humanoid*> _humanoids;
   unsigned _turn;
   const size_t WIDTH, HEIGHT;

   /**
    * Add humanoid to the field
    * @tparam T Humanoid concrete class type
    * @param amount
    */
   template <typename T>
   void addHumanoid(unsigned amount = 1);

public:

   /**
    * Class Constructor
    * @param width of the field
    * @param height of the field
    * @param nbVampires initial number of vampires
    * @param nbHumans initial number of humans
    */
   Field(size_t width, size_t height, unsigned nbVampires, unsigned nbHumans);

   /**
    * Destructor, deletes dynamically created humans
    */
   ~Field();

   /**
    * Lets all humanoid contained perform one action
    * @return turn number
    */
   unsigned nextTurn();

   /**
    * Add humanoid to the field
    * @param h the humanoid to be added
    */
   void add(Humanoid* h);

   /**
    * @return  the lits of Humanoid contained
    */
   std::list<Humanoid*> humanoids() const;

    /**
     * @tparam T Humanoid Type
     * @param from closest humanoid to find from
     * @return the closest Humanoid from the given Humanoid
     */
   template <typename T>
   Humanoid* getClosest(const Humanoid* from) const;

   /**
    * Check if a certain position in the field is occupied by a Humanoid
    * @param posX x coordinate to check
    * @param posY y coordinate to check
    * @return true if no Humanoid on this position
    */
   bool isPosFree(int posX, int posY) const;

   /**
    * @return field width
    */
   size_t width() const;

   /**
    * @return field height
    */
   size_t height() const;

   /**
    * Current status of the simulation (finished / not finished)
    * @return tru if the game has ended (no more Vampires)
    */
   bool isGameOver() const;

   /**
    * Check if Buffy won the game
    * @return true if at least a Human survived
    */
   bool won() const;

   /**
    * @return the turn number
    */
   unsigned turn() const;

};

#include "FieldImpl.hpp"

#endif //BUFFY_FIELD_HPP
