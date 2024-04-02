//
// Created by danyl on 02.04.2024.
//

#ifndef FURNITURE_STORE_WRONGPASSWORD_H
#define FURNITURE_STORE_WRONGPASSWORD_H
#include <exception>

class WrongPassword: public std::exception{
public:
    WrongPassword()=default;
    ~WrongPassword()=default;
    const char *what() const noexcept override{
        return "Wrong password!!!";
    };
};

#endif //FURNITURE_STORE_WRONGPASSWORD_H
