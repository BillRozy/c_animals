
#include <c++/thread>
#include <zconf.h>
#include "Animal.h"

Animal::Animal(){
    mAge = 0;
    mWeight = 50;
}

Animal::Animal(float age, float weight) {
    mAge = age;
    mWeight = weight;
}

void Animal::makeChild(){
    std::cout << "Started creating child!" << std::endl;
    for (int i = 0; i < 100; i+=10) {
        std::cout << i << "%" << std::endl;
        sleep(1);
    }
    std::cout << "Child Complete!" << std::endl;
}