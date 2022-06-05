//
// Created by dimde on 5/30/2022.
//

#include <iostream>
#include "headers/BuffyStats.hpp"


int main() {
   BuffyStats stats(50, 50, 10, 20, 1);
   std::cout << stats.successRate();
}