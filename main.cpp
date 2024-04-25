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
/*//task 1
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
}*/

/*//task2
template <typename T>
void insertVector(vector<T> &inVector, vector<T> &fromVector,int insertPosition){
    try {
        if (insertPosition > inVector.size())
        throw out_of_range(" Out of range");


        if (insertPosition == inVector.size()) {
            auto itFrom = fromVector.begin();
            while (itFrom != fromVector.end()) {
                inVector.push_back(*itFrom);
                itFrom++;
            }
        } else {
            int counter = 0;
            vector<T> bufvector;
            for (auto itIn = inVector.begin(); itIn != inVector.end(); itIn++) {

                if (counter > insertPosition - 1) {
                    cout << endl;
                    cout<<"Elements that stay after insert position: "<<endl;
                    cout << *itIn <<endl;
                    cout<<endl;
                    bufvector.push_back(*itIn);

                }

                else {
                    counter++;
                    cout<<"Elements that stay before insert position: "<<endl;
                    cout << *itIn << " " << endl;

                }
            }
            auto itIn = inVector.rbegin();
            for (int i = 0; i < bufvector.size(); i++) {
                inVector.pop_back();
            }

            cout << "------------------" << endl;
            cout<<endl;
            for (auto itIn = inVector.begin(); itIn != inVector.end(); itIn++) {
                cout << *itIn << " ";
            }
                cout<<endl;
            auto itFrom = fromVector.begin();
            while (itFrom != fromVector.end()) {
                inVector.push_back(*itFrom);
                itFrom++;
            }
            auto itBuf = bufvector.begin();
            while (itBuf != bufvector.end()) {
                inVector.push_back(*itBuf);
                itBuf++;
            }

        }
        cout << "------------------" << endl;
        for (auto itIn = inVector.begin(); itIn != inVector.end(); itIn++) {
            cout << *itIn << " ";
        }
    }
    catch (out_of_range &e){
        cout<<e.what()<<endl;
    }

}*/
//task 3
template <typename T>
void deleteMidEl(deque<T> dIn,deque<T> dFrom){
    cout<<"Size of queue: "<<dFrom.size()<< endl;
        int middleIndex = dFrom.size()/2;//знаходимо індекс середини черги
        cout<<"middle index = "<<middleIndex<<endl;
    int counter = 0 ;
        if(dFrom.size()%2!=0){// к-сть елементів в черзі непарна
            for(auto itFrom = dFrom.begin();itFrom != dFrom.end();itFrom++){
                cout<<*itFrom<<" ";

                if(counter > middleIndex ){
//                    cout<<"this element you pushed in dIn: "<<endl;
//                    cout<<*itFrom<< endl;
                    dIn.push_front(*itFrom);
                }
                else{
                    counter ++;
//                    cerr<<*itFrom<<" ";
                }

                if(counter<middleIndex+1){
//                    cout<<"this element you pushed in dIn: "<<endl;
//                    cout<<*itFrom<< endl;
                    dIn.push_front(*itFrom);

                }
            }
            cout<<endl;
            cout<<"Here is you queue with middle element: "<<endl;
            for(auto itIn = dIn.rbegin();itIn!=dIn.rend();itIn++){
                cout<<*itIn<<" ";
            }

        }
        else {
            for (auto itFrom = dFrom.begin(); itFrom != dFrom.end(); itFrom++) {
                cout << *itFrom << " ";
                if (counter > middleIndex) {
//                    cout<<"this element you pushed in dIn: "<<endl;
//                    cout<<*itFrom<< endl;
                    dIn.push_front(*itFrom);
                } else {
                    counter++;
//                    cerr<<*itFrom<<" ";
                }

                if (counter < middleIndex ) {
//                    cout<<"this element you pushed in dIn: "<<endl;
//                    cout<<*itFrom<< endl;
                    dIn.push_front(*itFrom);

                }
            }
            cout<<endl;
            cout<<"Here is you queue with middle element: "<<endl;
            for(auto itIn = dIn.rbegin();itIn!=dIn.rend();itIn++){
                cout<<*itIn<<" ";
        }

        }








}





int main() {
/*//task1
        array<int, 5> arr = {1, 2, 3, 4, 5};
        int shift =3;

        array<int, 5> shiftedArr = shiftArray(arr, shift);

        for (int i : shiftedArr) {
            cout << i << " ";
        }

        cout << endl;
        */

/*//task 2
vector<int> vector1{1,2,3,4};
vector<int> vector2{11,13,15};

    insertVector(vector1,vector2,3);
*/
//task 3
deque<int> dFrom {1,2,3,4,5,6};
deque<int> dIn {};
    deleteMidEl(dIn,dFrom);





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
