#include <iostream>
#include <vector>
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

int main() {

    cout<<"Welcome to the furniture shop"<<endl<<endl;
    cout << "Choose who you are: " << endl;
    cout << "1. Administrator" << endl;
    cout << "2. Client"<<endl;
    Shtrix();
    int k;
    cin >> k;
    try {
        if(k!=1 && k!=2)
            throw WrongType();
        if(k==1)//Admin
        {
            string password;
            cout<<"Enter your password"<<endl;
            cin>>password;
            if (password == "143-A3"){
                while (true){
                    Shtrix();
                    cout<<"Choose what do you want to do:"<<endl;
                    cout<<"A-ADD FURNITURE"<<endl;
                    cout<<"B-ADD EMPLOYEE"<<endl;
                    cout<<"C-SHOW THE LIST OF EMPLOYEE"<<endl;
                    cout<<"PRESS 'Q' IF YOU WANT TO STOP"<<endl;
                    Shtrix();
                    char  choice;
                    cin>>choice;
                    try{
                        if(choice !='A' && choice !='B' && choice !='C' && choice !='D' && choice !='E' && choice !='F' && choice !='G' && choice !='Q' )
                            throw WrongChoice();
                        switch (choice) {
                            case 'A':{
                                AddFurniture();//add furniture
                                break;
                            }
                            case 'B':{

                                AddEmployee();//add employee
                                break;
                            }
                            case 'C':{

                                ShowEmp();
                                break;
                            }
                            case 'Q':{//smth

                                return  0;
                            }
                        }
                    }
                    catch (WrongChoice &A){
                        cerr<<A.what();
                    }
                }
            }
            else {
                throw WrongPassword();
            }
        }
        else{//client
            Shtrix();
            cout<<"Welcome"<<endl;
            AddClient();
            cout<<"Choose what do you want: "<<endl;
            cout<<"A - View catalog of furniture "<<endl;
            cout<<"B - Make Order "<<endl;
            cout<<"C - View history "<<endl;
            cout<<" press Q - if you want to stop "<<endl;
            char choice;
            cin>>choice;
            try{
                if(choice!='A'&& choice!='B'&&choice!='C'&&choice!='Q') {
                    throw WrongChoice();
                }
                switch (choice) {
                    case 'A':{
                        ShowFur();
                        break;
                    }
                    case 'B':{
                        MakeOrder();
                        break;
                    }
                    case 'C':{

                        break;
                    }
                    case 'Q':{
                        return 0;
                    }

                }
            }
            catch (WrongChoice &A){
                cerr<<A.what();
            }




        }
    }
    catch (WrongPassword &Password){
        cerr<<Password.what();
    }




    return 0;
}
