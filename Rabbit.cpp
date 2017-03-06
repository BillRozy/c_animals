//
// Created by FD on 06.03.2017.
//

#include <c++/vector>
#include <c++/thread>
#include "Rabbit.h"

Rabbit::Rabbit() : Animal() {
    mKindOf = "Rabbit";
};

Rabbit::Rabbit(float age, float weight) : Animal(age, weight)  {
    mKindOf = "Rabbit";
}

Rabbit::~Rabbit() {
    std::cout << "~Rabbit()" << std::endl;
}

void Rabbit::tellAboutSelf() {
    std::cout << "I am a Rabbit, " << mAge << " aged and " << mWeight << " pound of weight;" << std::endl;
}

void Rabbit::makeChild() {
    std::cout << "Rabbit started making child!" << std::endl;
    Animal::makeChild();
}

std::vector<Animal*> Rabbit::operator+(Animal &other) throw(const char*) {
    if(other.getKindOf() != "Rabbit"){
        throw "OMG! Stop creating monsters!";
    }
    Rabbit b = (Rabbit&) other;
    mPregnantThread = std::thread(makeChild, this);
    if (mPregnantThread.joinable())
        mPregnantThread.join();
    std::vector<Animal*> rabbits = {new Rabbit(0,1),new Rabbit(0,1),new Rabbit(0,1),new Rabbit(0,1),new Rabbit(0,1) };
    return rabbits;
}
