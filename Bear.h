//
// Created by FD on 05.03.2017.
//
#include "Animal.h"
#ifndef UNTITLED_BEAR_H
#define UNTITLED_BEAR_H


class Bear: public Animal {
private:
    std::string mPreference;
public:
    Bear();
    Bear(float age, float weight, std::string pref);
    void tellAboutSelf();
    friend void setBearPref(std::string pref, Bear& animal);
    inline std::string toString(){
        return "Hi, i am Bear!";
    }
    inline std::string getPref(){
        return this->mPreference;
    }
    void makeChild();
    std::vector<Animal*> operator+(Animal &other) throw(const char*);
};


#endif //UNTITLED_BEAR_H
