#include <iostream>
#include "Animal.h"
#include "Bear.h"
#include "Rabbit.h"

void setBearPref(std::string pref, Bear& animal){
    animal.mPreference = pref;
}

int main() {
    Animal *animal = new Bear(6.5f, 58, "Fish and Chips");
    setBearPref("Smoking", (Bear&) *animal);
    Animal *animal2 = new Bear(8, 52, "Drinking");
    Animal *rabbit1 = new Rabbit(2,5);
    Animal *rabbit2 = new Rabbit(4,5);
    std::vector<Animal *> strangeChildren;
    std::vector<Animal *> rabbitChildren;
    std::vector<Animal*> children;
    try {
        children = (Bear &) *animal + *animal2;
        rabbitChildren = (Rabbit &) *rabbit2 + *rabbit1;
        strangeChildren = (Bear &) *animal + *rabbit1;
    }catch (const char* e){
        std::cerr << e << std::endl;
    }
    for(auto child : children){
        child->tellAboutSelf();
    }
    for(auto child : strangeChildren){
        child->tellAboutSelf();
    }
    for(auto child : rabbitChildren){
        child->tellAboutSelf();
    }
    delete animal;
    delete animal2;
    return 0;
}