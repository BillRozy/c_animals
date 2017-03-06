//
// Created by FD on 06.03.2017.
//

#ifndef UNTITLED_RABBIT_H
#define UNTITLED_RABBIT_H


#include "Animal.h"

class Rabbit : public Animal {
public:
    Rabbit();
    Rabbit(float age, float weight);
    ~Rabbit();
    void tellAboutSelf();
    inline std::string toString(){
        return "Hi, i am Rabbit!";
    }
    void makeChild();
    std::vector<Animal*> operator+(Animal &other) throw(const char*);
};


#endif //UNTITLED_RABBIT_H
