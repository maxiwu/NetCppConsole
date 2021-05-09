#include "pch.h"
#include "Shape.h"
#include "Square.h"
#include <string>
#include <iostream>

//using namespace std;
using namespace System;

int main(array<System::String ^> ^args)
{
    Square sq;
    Shape ^sp;
    sp = % sq;
    std::cout << (std::to_string(sp->GetArea(2))) << std::endl;
    std::cout << (std::to_string(sp->GetTotalSide(3))) << std::endl;
    std::cout << (std::to_string(sp->IsShape())) << std::endl;
    //cout << (to_string(sp->GetArea(2))) << endl;
    return 0;
}
