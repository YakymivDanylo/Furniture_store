cmake_minimum_required(VERSION 3.27)
project(Furniture_store)

set(CMAKE_CXX_STANDARD 23)

add_executable(Furniture_store main.cpp
        Client.cpp
        Client.h
        Employee.cpp
        Employee.h
        Functions.cpp
        Functions.h
        Furniture.cpp
        Furniture.h
        Order.cpp
        Order.h
        People.cpp
        People.h
        WrongChoice.h
        WrongPassword.h
        WrongType.h)
