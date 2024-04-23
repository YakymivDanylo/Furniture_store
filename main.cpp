#include <iostream>
#include <vector>
#include <array>
#include <deque>
#include <memory>
#include <string>
#include "Order.h"
#include "Furniture.h"
#include "Client.h"
#include "People.h"
#include "WrongType.h"
#include "WrongPassword.h"
#include "WrongChoice.h"
#include <fstream>
#include "Functions.h"
#include "Employee.h"
using namespace std;
template <size_t N>
array<int, N> shiftArray(const array<int, N> & arr, int shift) {
    if (shift == 0) {
        return arr;
    }

    array<int, N> shiftedArr;
    for (size_t i = 0; i < N; i++) {
        shiftedArr[(i + shift) % N] = arr[i];
    }

    return shiftedArr;
}

int main() {

        array<int, 5> arr = {1, 2, 3, 4, 5};
        int shift =3;

        array<int, 5> shiftedArr = shiftArray(arr, shift);

        for (int i : shiftedArr) {
            cout << i << " ";
        }

        cout << endl;









    //   cout<<"Welcome to the furniture shop"<<endl<<endl;
//    cout << "Choose who you are: " << endl;
//    cout << "1. Administrator" << endl;
//    cout << "2. Client"<<endl;
//    Shtrix();
//    int k;
//    cin >> k;
//    try {
//        if(k!=1 && k!=2)
//            throw WrongType();
//        if(k==1)//Admin
//        {
//
//            string password;
//            cout<<"Enter your password"<<endl;
//            cin>>password;
//            if (password == "143-A3"){
//                while (true){
//                    Shtrix();
//                    cout<<"Choose what do you want to do:"<<endl;
//                    cout<<"A-ADD FURNITURE"<<endl;
//                    cout<<"B-ADD EMPLOYEE"<<endl;
//                    cout<<"C-SHOW THE LIST OF EMPLOYEE"<<endl;
//                    cout<<"D-SHOW THE LIST OF CLIENTS"<<endl;
//                    cout<<"E-SHOW THE LIST OF FURNITURE"<<endl;
//                    cout<<"PRESS 'Q' IF YOU WANT TO STOP"<<endl;
//                    Shtrix();
//                    char  choice;
//                    cin>>choice;
//                    try{
//                        if(choice !='A' && choice !='B' && choice !='C' && choice !='D' && choice!='E' && choice !='Q' )
//                            throw WrongChoice();
//                        switch (choice) {
//                            case 'A':{
//                                AddFurniture();//add furniture
//                                break;
//                            }
//                            case 'B':{
//
//                                AddEmployee();//add employee
//                                break;
//                            }
//                            case 'C':{
//
//                                ShowEmp();
//                                break;
//                            }
//                            case 'D':{
//                                ShowClients();
//                                break;
//                            }
//                            case 'E':{
//                                ShowFur();
//                                break;
//                            }
//                            case 'Q':{//smth
//
//                                return  0;
//                            }
//                        }
//                    }
//                    catch (WrongChoice &A){
//                        cerr<<A.what();
//                    }
//                }
//            }
//            else {
//                throw WrongPassword();
//            }
//        }
//        else{//client
//            Shtrix();
//            cout<<"Welcome"<<endl;
//            cout << "You need to log in" << endl;
//            cout << "Enter your name: " << endl;
//            shared_ptr<string> name{new string{""}};
//            cin >> *name;
//            cout << "Enter your surname: " << endl;
//            shared_ptr<string> surname{new string{""}};
//            cin >> *surname;
//            cout << "Enter your age: " << endl;
//            shared_ptr<int> age{new int{0}};
//            cin >> *age;
//            cout << "Enter your living address: " << endl;
//            shared_ptr<string> livingAddress{new string{" "}};
//            cin >> *livingAddress;
//            Client newClient(*name,*surname,*age,*livingAddress);
//            AddClient(newClient);
//            while (true) {
//                cout << "Choose what do you want: " << endl;
//                cout << "A - View catalog of furniture " << endl;
//                cout << "B - Make Order " << endl;
//                cout << "C - View history " << endl;
//                cout << " press Q - if you want to stop " << endl;
//                Shtrix();
//                char choice;
//
//                cin >> choice;
//                try {
//
//                    if (choice != 'A' && choice != 'B' && choice != 'C' && choice != 'Q') {
//                        throw WrongChoice();
//                    }
//                    switch (choice) {
//                        case 'A': {
//
//                            ShowFur();
//                            break;
//                        }
//                        case 'B': {
//                            MakeOrder(newClient);
//                            break;
//                        }
//                        case 'C': {
//
//                            ViewHistory(newClient);
//                            break;
//                        }
//                        case 'Q': {
//                            return 0;
//                        }
//                    }
//
//                }
//                catch (WrongChoice &A) {
//                    cerr << A.what();
//                }
//
//
//            }
//        }
//    }
//    catch (WrongPassword &Password){
//        cerr<<Password.what();
//    }

    return 0;
}
