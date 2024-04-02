#include "Order.h"
#include "iostream"
Order::Order()
        : Order("",0,"",0,""){}

Order::Order(string addressDelivery, double priceGoods, string currency, double priceDeliver, string status)
        : addressDelivery(addressDelivery), priceGoods(priceGoods), currency(currency),priceDeliver(priceDeliver), status(status){}

Order::Order(const Order &other)
{
    addressDelivery=other.addressDelivery;
    priceGoods=other.priceGoods;
    currency=other.currency;
    priceDeliver=other.priceDeliver;
    status=other.status;
}


Order Order::operator=(const Order &rhs) {
    if(this==&rhs)
        return *this;
    else{
        addressDelivery=rhs.addressDelivery;
        priceGoods=rhs.priceGoods;
        currency=rhs.currency;
        priceDeliver=rhs.priceDeliver;
        status=rhs.status;
        return *this;
    }
}
ostream &operator<<(ostream &os, const Order &obj){
    os<<" Address of delivery: "<<obj.addressDelivery<<"; Price of goods: "<<obj.priceGoods<<"; Currency: "<<obj.currency<<"; Price of delivery: "<<obj.priceDeliver<<"; Status: "<<obj.status;
    return os;
}

string Order::getAddressDelivery() {
    return addressDelivery;
}
double Order::getPriceGoods(){
    return priceGoods;
}
double Order::getPriceDeliver(){
    return priceDeliver;
}
string Order::getCurrency(){
    return currency;
}
string Order::getStatus(){
    return status;
}
