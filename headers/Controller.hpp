//
// Created by dimde on 6/10/2022.
//

#ifndef BUFFY_CONTROLLER_HPP
#define BUFFY_CONTROLLER_HPP


#include "simulation/Field.hpp"

/**
 * Buffy simulation controller. Reads user input and manages actions to be taken
 * @author De Bleser Dimitri
 * @author Vincent Peer
 */
class Controller {
   static const char OPTIONS[];
   Field field;
   const unsigned NB_VAMPIRES, NB_HUMANS;

   /**
    * Checks if a certain input can is valid according to given menu
    * @param input to check
    * @return true if option exists in the menu
    */
   static bool checkInput(const char input) ;

   /**
    * Ask user to input a next action according to a given menu
    * @return user's input
    */
   char userInput() ;
public:

   /**
    * Class constructor
    * @param fieldWidth
    * @param fieldHeight
    * @param nbVampire
    * @param nbHuman
    */
   Controller(size_t fieldWidth, size_t fieldHeight, unsigned nbVampire, unsigned nbHuman);

   /**
    * Start the simulation and ask for user input
    */
   void run();

   /**
    * Run and show statistics result on buffy's success rate
    */
   void stats() const;

   /**
    * Let all humanoids perform one action and print the updated field
    */
   void next();
};


#endif //BUFFY_CONTROLLER_HPP
