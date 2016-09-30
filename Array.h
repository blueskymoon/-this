#include <iostream>
using namespace std;
class Array
{
public:
    Array(int len);
    ~Array();
    void setlen(int len);
    int getlen();
    void printInfo();
private:
    int len;
};


