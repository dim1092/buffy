//
// Created by dimde on 5/31/2022.
//

#include "../../headers/simulation/Field.hpp"
#include "../../headers/characters/Human.hpp"
#include "../../headers/utils/Rand.hpp"
#include "../../headers/characters/Vampire.hpp"
#include "../../headers/characters/Buffy.hpp"
#include <iostream>

using namespace std;

Field::Field(size_t width, size_t height, unsigned nbVampires, unsigned nbHumans)
      : _humanoids(), _turn(0), WIDTH(width), HEIGHT(height) {
   addHumanoid<Buffy>(1);
   addHumanoid<Human>(nbHumans);
   addHumanoid<Vampire>(nbVampires);
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
         Humanoid* toDelete = *it;
         it = _humanoids.erase(it); // suppression de l’élément dans la liste
         delete toDelete; // destruction de l’humanoide référencé
      }
      else
         ++it;
   return _turn++;
}

void Field::add(Humanoid* h) {
   _humanoids.push_back(h);
}

std::list<Humanoid *> Field::humanoids() const {
   return _humanoids;
}

Humanoid *Field::getClosest(const Humanoid* from, const Symbol* type) const {
   Humanoid* closest = nullptr;
   unsigned minDistance = UINT_MAX;

   for (Humanoid* h : _humanoids) {
      if (h != from && h->symbol() == type && h->isAlive()) {
         unsigned dist = from->distance(h);
         if (dist == 1)
            return h;

         if (dist < minDistance) {
            minDistance = dist;
            closest = h;
         }
      }
   }
   return closest;
}

size_t Field::width() const {
   return WIDTH;
}

size_t Field::height() const {
   return HEIGHT;
}

bool Field::isGameOver() const {
   for (Humanoid* h : _humanoids)
      if (h->symbol() == &Symbol::VAMPIRE)
         return true;
   return false;
}

bool Field::won() const {
   for (Humanoid* h : _humanoids)
      if (h->symbol() == &Symbol::HUMAN)
         return true;
   return false;
}



template<typename T >
void Field::addHumanoid(unsigned amount) {
   for (size_t i = 0; i < amount; ++i)
      _humanoids.push_back(new T((size_t) Rand::getInstance().nextInt(0, (int) WIDTH - 1),
                                 (size_t) Rand::getInstance().nextInt(0, (int)HEIGHT - 1)));
}

bool Field::isPosFree(int posX, int posY) const {
   for (Humanoid* h : _humanoids)
      if (h->posX() == posX && h->posY() == posY)
         return false;
   return true;
}

unsigned Field::turn() const {
   return _turn;
}
