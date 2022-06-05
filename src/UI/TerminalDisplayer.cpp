//
// Created by dimde on 6/4/2022.
//

#include "../../headers/UI/TerminalDisplayer.hpp"
#include <iostream>

using namespace std;

TerminalDisplayer::TerminalDisplayer(const Field& field) {
   // Initializing map
//   map = new const Symbol**[field.height()];
//   for (size_t i = 0; i < field.height(); ++i)
//      map[i] = new const Symbol*[field.width()];
}

void TerminalDisplayer::displayField(const Field &field) const {
   // Resetting map
   const Symbol*** map = new const Symbol**[field.height()];
   for (size_t i = 0; i < field.height(); ++i)
      map[i] = new const Symbol*[field.width()];

   for (size_t i = 0; i < field.height(); ++i)
      for (size_t j = 0; j < field.width(); ++j)
         map[i][j] = nullptr;
   // Adding humanoids
   for (Humanoid* h : field.humanoids())
      if (h->posX() > field.width() || h->posY() > field.height())
         cout << h->posX() << " " << h->posY() << endl;
      else
         map[h->posX()][h->posY()] = h->symbol();

   // Printing
   for (size_t i = 0; i < field.height(); ++i)
      for (size_t j = 0; j < field.width(); ++j)
         cout << (map[i][j] == nullptr ? " " : map[i][j]->toString());
}
