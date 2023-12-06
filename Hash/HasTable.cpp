#include "HasTable.h"

int HasTable::hashFuction(const string& name)
{
    int result = 0;
    for (char c : name) {
        result += int(c);
    }
    if (result >= this->size) {
        result %= this->size;
    }
    return result;
}

HasTable::HasTable()
{
    this->size = 10;
    mas = make_shared<LList[]>(this->size);
}

HasTable::HasTable(int size)
{
    this->size = size;
    mas = make_shared<LList[]>(this->size);
}

void HasTable::add(const string& name, int age)
{
    mas[ 
        this->hashFuction(name)
    ].add(name, age);
}

void HasTable::print()
{
}
