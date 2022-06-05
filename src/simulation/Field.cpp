//
// Created by dimde on 5/31/2022.
//

#include "../../headers/simulation/Field.hpp"
#include "../../headers/characters/Human.hpp"
#include "../../headers/utils/Rand.hpp"
#include "../../headers/characters/Vampire.hpp"
#include "../../headers/characters/Buffy.hpp"

using namespace std;

Field::Field(unsigned int width, unsigned int height) : _humanoids(), _turn(0), _width(width), _height(height) {
   // todo put here?
   _humanoids.push_back(new Buffy((size_t) Rand::getInstance().nextInt(0,(int) _width),
                                     (size_t) Rand::getInstance().nextInt(0, (int) _height)));
}

Field::~Field() {
   for (Humanoid* h : _humanoids)
      delete h;
}


unsigned Field::nextTurn()
{
   // Déterminer les prochaines actions
   for (list<Humanoid*>::iterator it = _humanoids.begin(); it != _humanoids.end(); it++)
      (*it)->setAction(*this);
   // Executer les actions
   for (list<Humanoid*>::iterator it = _humanoids.begin(); it != _humanoids.end(); it++)
      (*it)->executeAction(*this);
   // Enlever les humanoides tués
   for (list<Humanoid*>::iterator it = _humanoids.begin(); it != _humanoids.end(); )
      if (!(*it)->isAlive()) {
         it = _humanoids.erase(it); // suppression de l’élément dans la liste
         Humanoid* tmp = *it;
         delete *it; // destruction de l’humanoide référencé
      }
      else
         ++it;
   return _turn++;
}

void Field::remove(Humanoid& h) {
   delete &h;
   _humanoids.remove(&h);
}

void Field::add(Humanoid* h) {
   _humanoids.push_back(h);
}

std::list<Humanoid *> Field::humanoids() const {
   return _humanoids;
}

Humanoid *Field::getClosest(const Humanoid* from, const Symbol* type) const {
   Humanoid* closest = nullptr;
   unsigned minDistance;

   for (Humanoid* h : _humanoids) {
      if (h != from && h->symbol() == type && h->isAlive()) {
         unsigned dist = from->distance(h);
         if (dist == 1)
            return h;

         if (closest == nullptr || dist < minDistance) {
            minDistance = dist;
            closest = h;
         }
      }
   }
   return closest;
}

unsigned Field::width() const {
   return _width;
}

unsigned Field::height() const {
   return _height;
}

bool Field::hasVamp() const {
   for (Humanoid* h : humanoids())
      if (h->symbol() == &Symbol::VAMPIRE)
         return true;
   return false;
}

bool Field::hasHuman() const {
   for (Humanoid* h : humanoids())
      if (h->symbol() == &Symbol::HUMAN)
         return true;
   return false;
}

void Field::addHuman(unsigned int amount) {
   for (size_t i = 0; i < amount; ++i)
      _humanoids.push_back(new Human(Rand::getInstance().nextInt(0, _width),
                                         Rand::getInstance().nextInt(0, _height)));
}

void Field::addVampire(unsigned int amount) {
   for (size_t i = 0; i < amount; ++i)
      _humanoids.push_back(new Vampire(Rand::getInstance().nextInt(0, _width),
                                           Rand::getInstance().nextInt(0, _height)));
}



