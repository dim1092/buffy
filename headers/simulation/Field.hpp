//
// Created by dimde on 5/31/2022.
//

#ifndef BUFFY_FIELD_HPP
#define BUFFY_FIELD_HPP

class Humanoid;

#include <list>
#include "../characters/Humanoid.hpp"

class Field {
   std::list<Humanoid*> _humanoids;
   unsigned _turn, _width, _height;
public:
   Field(unsigned width, unsigned height);
   ~Field();
   unsigned nextTurn();
   void remove(Humanoid& h);
   void add(Humanoid* h);
   std::list<Humanoid*> humanoids() const;
   Humanoid* getClosest(const Humanoid* from, const Symbol* type) const;
   unsigned width() const;
   unsigned height() const;
   bool hasVamp() const;
   bool hasHuman() const;
   void addHuman(unsigned amount);
   void addVampire(unsigned amount);
};


#endif //BUFFY_FIELD_HPP
