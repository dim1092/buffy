
#include <iostream>
#include "headers/Controller.h"

/**
 * Main class of our buffy simulation, gets program parameters and lunches a controller
 * @author De Bleser Dimitri
 * @author Vincent Peer
 */
using namespace std;
int main(int argc, char** argv) {
   if (argc < 5) {
      cout << "Missing parameters" << endl
           << "usage : buffy <field width> <field height> <number of vampires> <number of humans>" << endl;
      return EXIT_FAILURE;
   }

   Controller c((unsigned) atoi(argv[1]), (unsigned) atoi(argv[2]),
                (unsigned) atoi(argv[3]), (unsigned) atoi(argv[4]));
   c.run();
}