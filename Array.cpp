
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
void Array::setlen(int len)
{
    this->len = len;
}

int Array::getlen()
{
    return len;
}


