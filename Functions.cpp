#include <memory>
#include <iostream>
#include "Functions.h"
#include "Furniture.h"
#include <fstream>
#include "Order.h"
using namespace std;
void Shtrix (){
    cout<<"--------------------------"<<endl;
}


void AddFurniture(){
    cout<<"You want to add furniture"<<endl<<endl;
    shared_ptr <string> name {new string {""}};
    shared_ptr <int> num {new int {0}};
    cout<<"Enter number of your furniture"<<endl;
    cin>>*num;
    cout<<"Enter name of your furniture"<<endl;
    cin>>*name;
    shared_ptr<double> price{new double {0.0}};
    cout<<"Enter price of your furniture"<<endl;
    cin>>*price;
    shared_ptr <string> currency {new string {""}};
    cout<<"Enter the currency in which the transaction will be carried out"<<endl;
    cin>>*currency;
    shared_ptr <string> color{new string {""}};
    cout<<"Enter color of your furniture"<<endl;
    cin>>*color;
    Furniture fur(*name,*price,*currency,*color);
    ofstream foutfur((R"(C:\clion\Furniture_store\List\Furniture_list.txt)"),ios_base::app);
    foutfur<<*num<<"\t"<<fur<<"\t"<<endl;
    foutfur.close();
}

void AddEmployee(){
    shared_ptr <int> num{new int {0}};
    cout<<"Enter number of employee"<<endl;
    cin>>*num;
    shared_ptr<string> name {new string {""}};
    cout<<"Enter name of employee"<<endl;
    cin>>*name;
    shared_ptr<string> surname {new string {""}};
    cout<<"Enter surname of employee"<<endl;
    cin>>*surname;
    shared_ptr<int> salary {new int {0}};
    cout<<"Enter salary of employee"<<endl;
    cin>>*salary;
    shared_ptr<string> position {new string {""}};
    cout<<"Enter position of employee"<<endl;
    cin>>*position;
    Employee emp(*name,*surname,*salary,*position);
    ofstream foutE((R"(C:\clion\Furniture_store\List\Employee_list.txt)"),ios_base::app);
    foutE<<*num<<"\t"<<emp<<"\t"<<endl;
    foutE.close();

}

void ShowEmp(){
    ifstream finE((R"(C:\clion\Furniture_store\List\Employee_list.txt)"));
    if(!finE.is_open()){
        cerr<<"Can`t open file "<<endl;
    }

    shared_ptr<string> name {new string {""}};
    shared_ptr<string> surname {new string {""}};
    shared_ptr<string> position {new string {""}};
    shared_ptr<int> salary {new int {0}};
    shared_ptr<int> numOfEmp {new int {0}};
    while(finE>>*numOfEmp>>*name>>*surname>>*salary>>*position){
        cout<<*numOfEmp<<"\t"<< *name<<" "<<*surname<<"\t" <<*salary<<"\t" <<*position<<endl;
    }
    finE.close();
}

bool IsEmpInFile(string nameEm, string surnameEm) {
    ifstream finE(R"(C:\clion\Furniture_store\List\Employee_list.txt)");
    if (!finE.is_open()) {
        cerr << "Error opening file: " << endl;
    } else {
        shared_ptr<string> name{new string{""}};
        shared_ptr<string> surname{new string{""}};
        shared_ptr<string> position{new string{""}};
        shared_ptr<int> salary{new int{0}};
        shared_ptr<int> numOfEmp{new int{0}};
        while (finE >> *name >> *surname >> *salary >> *position >> *numOfEmp) {
            if (nameEm == *name && surnameEm == *surname) {
                finE.close();
                return true;
            }
        }
        finE.close();
        return false;
    }
}
