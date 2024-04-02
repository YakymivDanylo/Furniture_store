#include "Client.h"
#include <iostream>

Client::Client()
        :People(),surname("unknown"),livingAddress("unknown"){}

Client::Client(string name,string surname,int age,string livingAddress)
        :People(name,age),surname(surname),livingAddress(livingAddress){}

ostream &operator<<(ostream &os,const Client &obj) {
    os << obj.name<<"\t"<<obj.surname <<"\t"<< obj.age  << "\t"<<obj.livingAddress <<endl;
    return os;
}
Client::Client(const Client &other)
        :People(other),surname(other.surname),livingAddress(other.livingAddress){}

Client::Client( Client &&other)
        :People(other),surname(other.surname),livingAddress(other.livingAddress)
{
    other.name = "noname ";
    other.surname="unknown";
    other.age = 0;
    other.livingAddress = " unknown";

}

void Client::getPerson()
{
    cout<<"Name of the person: "<<name<<"; Age of the person:"<<age<<"; Address of the person:"<<livingAddress<<endl;
}

void Client::print(std::ostream &os) const {
    os << "Name of the person: " << name << "; Age of the person:" << age << "; Address of the person:" << livingAddress
       << endl;
}
string Client::getNameOfClient() {
    return name;
}
string Client::getSurnameOfClient() {
    return surname;
}