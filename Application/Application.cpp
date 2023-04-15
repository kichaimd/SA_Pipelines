// Application.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Application.h"
#include <iostream>
using namespace std;

CoolClass::CoolClass(void)
{
}

int CoolClass::Calc(int a, int b)
{
    if (a == b)
    {
        cout<<"This should run as expected without any failures\na="<<a<<"\nb="<<b;
        return 2 * a;
    }
    else
    {
        cout<<"This should run as expected without any failures\na="<<a<<"\nb="<<b;
        return a + b;
    }
    
}
