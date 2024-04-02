//
// Created by danyl on 02.04.2024.
//

#ifndef FURNITURE_STORE_WRONGCHOICE_H
#define FURNITURE_STORE_WRONGCHOICE_H
#include <iostream>
class WrongChoice: public std::exception{
public:
    WrongChoice()=default;
    ~WrongChoice()=default;
    const char *what() const noexcept override{
        return "Wrong choise!!!";
    };
};

#endif //FURNITURE_STORE_WRONGCHOICE_H
