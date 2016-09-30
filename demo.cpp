
// **********************************************
//      Filename: demo.cpp
//        Author:  liuyuyuan 
//        Create: 2016-09-30 21:47:24
// Last Modified: 2016-09-30 21:47:24
/************************************************/

#include <iostream>
#include "Array.h"
using namespace std;

int main(void)
{
    Array arr(10);
    arr.printInfo().setlen(7).printInfo();
  // cout<<"len = "<< arr.getlen() <<endl;
    return 0;
}
