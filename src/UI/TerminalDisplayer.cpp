//
// Created by dimde on 6/4/2022.
//

#include "../../headers/UI/TerminalDisplayer.hpp"
#include <iostream>

using namespace std;

void TerminalDisplayer::displayField(const Field &field) {
   string** map = new string*[field.height()];
   for (size_t i = 0; i < field.height(); ++i)
      map[i] = new string[field.width()];

   for (size_t i = 0; i < field.height(); ++i)
      for (size_t j = 0; j < field.width(); ++j)
         map[i][j] = " ";
   // Adding humanoids
   for (Humanoid* h : field.humanoids())
      map[h->posY()][h->posX()] = h->symbol()->toString();

   // Print
   printHorizontalBorder(field.width());
   for (size_t i = 0; i < field.height(); ++i) {
      cout << '|';
      for (size_t j = 0; j < field.width(); ++j)
         cout << map[i][j];
      cout << '|' << endl;
   }
   printHorizontalBorder(field.width());

   for (size_t i = 0; i < field.height(); ++i)
      delete [] map[i];
}

void TerminalDisplayer::printHorizontalBorder(size_t width) {
   cout << '+' << string(width, '-') << '+' << endl;
}
