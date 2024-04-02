//
// Created by danyl on 02.04.2024.
//

#ifndef FURNITURE_STORE_EMPLOYEE_H
#define FURNITURE_STORE_EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee {
    static int counter;
    string name;
    string surname;
    double salary;
    string position;

public:
    Employee();
    Employee(string empName,string empSurname,double empSalary,string empPosition);
    ~Employee();
    Employee(const Employee &other);
    Employee( Employee &&other);
    void getEmployee();
    friend ostream &operator<<( ostream &os, const Employee &obj);
    void operator++();
    void operator--();
    void ShowCounter();
};


#endif //FURNITURE_STORE_EMPLOYEE_H
