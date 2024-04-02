//
// Created by danyl on 02.04.2024.
//

#ifndef FURNITURE_STORE_PEOPLE_H
#define FURNITURE_STORE_PEOPLE_H
#include "iostream"
using namespace std;
class People {
protected:
    string name;
    int age;

public:
    People();

    People(string name,int age);

    friend ostream &operator <<(ostream &os,const People &obj);

    People(const People &other);
    People(People &&other) noexcept;

    virtual void getPerson()=0;
    virtual void print(ostream &os) const =0 ;
    ~People(){};


};

#endif //FURNITURE_STORE_PEOPLE_H
