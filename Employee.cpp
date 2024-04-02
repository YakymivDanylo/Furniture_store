#include "Employee.h"
#include <iostream>
using namespace std;

int Employee::counter=0;

Employee::Employee(string empName,string empSurname,double empSalary,string empPosition)
        :name(empName),surname(empSurname),salary(empSalary),position(empPosition){operator++();}

Employee::~Employee() {
    operator--();
}

void Employee::getEmployee(){
    cout<<position<<": "<<name<<" "<<surname<<"\nSalary: "<<salary;
}

ostream &operator<<(ostream &os,const Employee &obj ){
    os<<obj.name<<" "<<obj.surname<<"\t"<<obj.salary<<"\t"<<obj.position;
    return os;
}

void Employee::operator++() {
    counter++;
}

void Employee::operator--() {
    counter--;
}

void Employee::ShowCounter() {
    cout<<counter<<" employees";
}