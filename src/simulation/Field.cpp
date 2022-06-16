
#include "../../headers/simulation/Field.hpp"
#include "../../headers/characters/Vampire.hpp"
#include "../../headers/characters/Buffy.hpp"
#include "../../headers/characters/Human.hpp"
#include <iostream>

using namespace std;

Field::Field(size_t width, size_t height, unsigned nbVampires, unsigned nbHumans)
      : _humanoids(), _turn(0), WIDTH(width), HEIGHT(height) {

   if (nbVampires + nbHumans + 1 < height * width) {
      addHumanoid<Buffy>();
      addHumanoid<Human>(nbHumans);
      addHumanoid<Vampire>(nbVampires);
   } else {
      cout << "Error: to many Humanoids for field size" << endl;
   }

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

size_t Field::width() const {
   return WIDTH;
}

size_t Field::height() const {
   return HEIGHT;
}

bool Field::isGameOver() const {
   for (Humanoid* h : _humanoids)
      if (h->symbol() == &Symbol::VAMPIRE)
         return false;
   return true;
}

bool Field::won() const {
   for (Humanoid* h : _humanoids)
      if (h->symbol() == &Symbol::HUMAN)
         return true;
   return false;
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


