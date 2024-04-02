//
// Created by danyl on 02.04.2024.
//

#ifndef FURNITURE_STORE_WRONGTYPE_H
#define FURNITURE_STORE_WRONGTYPE_H
#include <iostream>
#include <exception>

class WrongType: public std::exception{
public:
    WrongType()=default;
    ~WrongType()=default;

    const char *what() const noexcept override{
        return "Wrong type of data, check what you choosed?";
    }
};
#endif //FURNITURE_STORE_WRONGTYPE_H
