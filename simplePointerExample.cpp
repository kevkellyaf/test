/**
 * Simple Pointer Example
 */

#include <iostream>
using std::cout;
using std::endl;

int main ()
{
    int x = 24;
    int* ptrX = &x;
    
    cout << "value of x      = " << x << endl;
    cout << "address of x    = " << &x << endl;
    cout << endl;
    cout << "value of ptrX   = " << *ptrX << endl;
    cout << "address of ptrX = " << ptrX << endl;
    
    return 0;
}
