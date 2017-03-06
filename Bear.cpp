//
// Created by FD on 05.03.2017.
//

#include <c++/thread>
#include "Bear.h"

Bear::Bear() : Animal() {
    mKindOf = "Bear";
};

Bear::Bear(float age, float weight, std::string pref) : Animal(age, weight)  {
    mKindOf = "Bear";
    mPreference = pref;
}

Bear::~Bear() {
    std::cout << "~Bear()" << std::endl;
}

void Bear::tellAboutSelf() {
    std::cout << "I am a Bear, " << mAge << " aged and " << mWeight << " pound of weight, and i like " << mPreference << std::endl;
}

void Bear::makeChild() {
    std::cout << "Bear started making child!" << std::endl;
    Animal::makeChild();
}

std::vector<Animal*> Bear::operator+(Animal &other) throw(const char*) {
    if(other.getKindOf() != "Bear"){
        throw "OMG! Stop creating monsters!";
        return std::vector<Animal*>{};
    }
    Bear b = (Bear&) other;
    mPregnantThread = std::thread(makeChild, this);
    if (mPregnantThread.joinable())
        mPregnantThread.join();
    return std::vector<Animal*>{ new Bear(0, 10, this->mPreference + " , " + b.getPref())};
}

