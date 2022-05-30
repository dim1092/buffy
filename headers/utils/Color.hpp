//
// Created by dimde on 5/30/2022.
//

#ifndef BUFFY_COLOR_HPP
#define BUFFY_COLOR_HPP


class Color {
   const char* NAME;

   Color(const char* name);
   Color(const Color&) = delete;
public :
   static const Color YELLOW, BLUE, PURPLE;
};


#endif //BUFFY_COLOR_HPP
