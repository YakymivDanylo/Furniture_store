//
// Created by danyl on 02.04.2024.
//

#ifndef FURNITURE_STORE_FUNCTIONS_H
#define FURNITURE_STORE_FUNCTIONS_H
#include <iostream>
#include "Furniture.h"
#include "Order.h"
#include "Employee.h"
#include "Client.h"
using namespace std;
void  Shtrix();
void AddFurniture();
void AddEmployee();
void ShowEmp();
void ShowClients();
bool IsEmpInFile(string nameEm,string surnameEm);
void AddClient(Client client);
void ShowFur();
void MakeOrder(Client client);
void ViewHistory(Client client);


#endif //FURNITURE_STORE_FUNCTIONS_H
