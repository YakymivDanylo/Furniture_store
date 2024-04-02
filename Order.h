//
// Created by danyl on 02.04.2024.
//

#ifndef FURNITURE_STORE_ORDER_H
#define FURNITURE_STORE_ORDER_H
#include <iostream>
#include <iostream>
#include "Furniture.h"

using namespace std;
class Order {


    string addressDelivery;
    double priceGoods;
    double priceDeliver;
    string currency;
    string status;



public:
    Order();
    Order(string addressDelivery);

    Order(string addressDelivery, double priceGoods, string currency, double priceDeliver, string status) ;

    Order(const Order &other);

    friend ostream &operator <<(ostream &os,const Order &obj);

    Order operator=(const Order &rhs);

    ~Order()
    {
        cout<<"Distruktor is here"<<endl;
    }

    string getAddressDelivery();
    double getPriceGoods();
    double getPriceDeliver();
    string getCurrency();
    string getStatus();
};
#endif //FURNITURE_STORE_ORDER_H
