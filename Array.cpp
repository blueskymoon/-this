
// **********************************************
//      Filename: Array.cpp
//        Author:  liuyuyuan 
//        Create: 2016-09-30 21:52:01
// Last Modified: 2016-09-30 21:52:01
/************************************************/
#include <iostream>
using namespace std;
#include "Array.h"

Array::Array(int len)
{
    this->len = len;
}

Array::~Array()
{}
Array& Array::setlen(int len)
{
    this->len = len;
}

int Array::getlen()
{
    return len;
}

Array &Array::printInfo()
{
    cout <<"len ="<<len<<endl;
    return *this;
}


