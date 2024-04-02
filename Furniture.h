//
// Created by danyl on 02.04.2024.
//

#ifndef FURNITURE_STORE_FURNITURE_H
#define FURNITURE_STORE_FURNITURE_H
#include <iostream>
using namespace std;

class Furniture {

public  :
    string name;
    double price;
    string color;
    string currency;
    Furniture();

    Furniture(string name);

    Furniture(string name, double rice);

    Furniture(string name, double price, string currency );

    Furniture(string name, double price, string currency,string color );

    Furniture(const Furniture &other);

    Furniture(Furniture &&other);



    friend istream &operator >>(istream &is, Furniture &obj);

    friend ostream &operator <<(ostream &os, Furniture &obj);

    bool operator>(const Furniture &rhs);

    Furniture operator=(const Furniture &rhs);

    virtual ~Furniture(){};
    virtual string getFurniture();
    void CompareFurniture(const Furniture &rhs);


    string getFurN();
    double getFurP();
    string getFurCu();
    string getFurCo();



};




#endif //FURNITURE_STORE_FURNITURE_H
