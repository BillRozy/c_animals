

#ifndef UNTITLED_ANIMAL_H
#define UNTITLED_ANIMAL_H

#include <iostream>
#include <thread>
#include <vector>

class Animal {
protected:
    float mAge, mWeight;
    std::string mKindOf;
//    std::thread mBornThread;

public:
    Animal();
    Animal(float age, float weight);
    virtual void tellAboutSelf() = 0;
    void move();
    void setAge(float age);
    void setWeight(float weight);
    std::string getKindOf(){
        return mKindOf;
    }
    virtual void makeChild();
    virtual std::vector<Animal*> operator+(Animal &other) throw(const char*) = 0;
};


#endif //UNTITLED_ANIMAL_H
