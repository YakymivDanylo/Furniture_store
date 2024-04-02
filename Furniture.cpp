#include "Furniture.h"
#include <iostream>
Furniture::Furniture()
        :Furniture{"noname",0,"unknown","unknown"}{}

Furniture::Furniture(string newname)
        :name{newname}{}

Furniture::Furniture(string newname,double newprice)
        :name{newname},price{newprice}{}

Furniture::Furniture(string newname,double newprice, string newcurrency)
        :name{newname},price{newprice},currency {newcurrency}{}

Furniture::Furniture(string newname,double newprice, string newcurrency,string newcolor)
        :name{newname},price{newprice},currency {newcurrency},color{newcolor}{}

string Furniture::getFurniture()
{
    string getFur = name + " " + to_string(price) +" "+currency+" "+color;
    return getFur;
}



Furniture::Furniture(const Furniture &other)
{
    name = other.name;
    price = other.price;
    currency = other.currency;
    color = other.color;
}

Furniture::Furniture(Furniture&& other)
        :name(other.name), price(other.price), currency(other.currency),color(other.color){
    other.name= " ";
    other.price = 0 ;
    other.currency = " ";
    other.color = " ";
}
Furniture Furniture::operator=(const Furniture &rhs) {
    if(this==&rhs)
        return *this;
    else{
        name=rhs.name;
        price=rhs.price;
        currency=rhs.currency;
        color=rhs.color;
        return *this;
    }
}


istream &operator>>(istream &is,  Furniture &obj)
{
    is>>obj.name >>  obj.price>>obj.currency>>obj.color;
    return is;
};

ostream &operator<<(ostream &os,  Furniture &obj){
    os<<obj.name<<" "<<obj.price<<"  "<<obj.currency<<" "<<obj.color;
    return os;
}

bool Furniture::operator>(const Furniture &rhs) {
    if (this->price>rhs.price){
        return true;
    }
    return false;
}

void Furniture::CompareFurniture(const Furniture &rhs)
{
    if(this->operator>(rhs))
    {
        cout<<this->name<<"Furniture has higher price: "<<this->price<<
            "then"<<rhs.name<<": "<<rhs.price<<endl;
    }
}

string Furniture::getFurN() {
    return name;
}
double Furniture::getFurP() {
    return price;
}
string Furniture::getFurCu() {
    return currency;
}
string Furniture::getFurCo() {
    return color;
}