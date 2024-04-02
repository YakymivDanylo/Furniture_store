#include "People.h"
#include <iostream>
People::People()
        :People{"noname",0}{}

People::People(string name,int age)
        : name{name},age{age}{}

People::People(const People &other)
{
    name = other.name;
    age = other.age;

}

People::People(People &&other)  noexcept : name{std::move(other.name)}, age{other.age} {
    other.name = "noname ";
    other.age = 0;
}

ostream &operator<<(ostream &os,const People &obj){
    obj.print(os);
    // os<<"Name: "<<obj.name<<"Age: "<<obj.age;
    return os;
}
