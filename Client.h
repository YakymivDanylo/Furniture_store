
#ifndef FURNITURE_STORE_CLIENT_H
#define FURNITURE_STORE_CLIENT_H
#include <iostream>
#include "People.h"
using namespace std;

class Client : public People{
private:
    string livingAddress;
    string dateOfBirth;
    bool identification() {
        return true;
    };
public:
    Client();
    Client(string name,int age,string livingAddress, string dateOfBirth) ;
    friend ostream &operator <<(ostream &os,const Client &obj);
    Client(const Client &other);
    Client(Client &&other);
    ~Client(){};
    void getPerson() override;
    void print(ostream &os) const override;


};
#endif
