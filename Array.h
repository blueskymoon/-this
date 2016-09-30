#include <iostream>
using namespace std;
class Array
{
public:
    Array(int len);
    ~Array();
    Array& setlen(int len);
    int getlen();
    Array& printInfo();
private:
    int len;
};


