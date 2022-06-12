//
// Created by dimde on 6/4/2022.
//

#ifndef BUFFY_TERMINALDISPLAYER_HPP
#define BUFFY_TERMINALDISPLAYER_HPP


#include "../simulation/Field.hpp"

/**
 * Class to display the simulation's field in a terminal
 * @author De Bleser Dimitri
 * @author Peer Vincent
 */
class TerminalDisplayer {

   /**
    * Print horizontal limits of the field
    * @param width width of the field
    */
   static void printHorizontalBorder(size_t width) ;
public:

   /**
    * Print the field and its content on the terminal
    * @param field to be printed
    */
   static void displayField(const Field& field) ;
};


#endif //BUFFY_TERMINALDISPLAYER_HPP
