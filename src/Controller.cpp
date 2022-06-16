//
// Created by dimde on 6/10/2022.
//

#include "../headers/Controller.hpp"
#include "../headers/BuffyStats.hpp"
#include "../headers/UI/TerminalDisplayer.hpp"
#include <iostream>

using namespace std;

const char Controller::OPTIONS[]{'q', 's', 'n'};

Controller::Controller(size_t fieldWidth, size_t fieldHeight, unsigned nbVampire, unsigned nbHuman)
   : field(fieldWidth, fieldHeight, nbVampire, nbHuman), NB_VAMPIRES(nbVampire), NB_HUMANS(nbHuman) {
}

void Controller::run() {
   // Print initial state of field
   TerminalDisplayer::displayField(field);

   bool quit = false;
   while (!quit) {
      switch (userInput()) {
         case 'q' :
            quit = true;
            break;
         case 's' :
            stats();
            break;
         case 'n' :
            next();
      }
   }
}

char Controller::userInput() {
   string input;
   do {
      cout << "[" << field.turn() << "] " << "q)quit s)statistiques n)next turn : ";
      getline(cin, input);
      cin.clear();
   } while (!checkInput(input[0]));

   return input[0];
}

bool Controller::checkInput(const char input) {
   for (char i : OPTIONS)
      if (i == input)
         return true;
   return false;
}

void Controller::next() {
   field.nextTurn();
   TerminalDisplayer::displayField(field);
}

void Controller::stats() const {
   BuffyStats stats(field.width(), field.height(), NB_VAMPIRES, NB_HUMANS);
   cout << "Success rate: " << stats.successRate() * 100 << " %" << endl;
}
