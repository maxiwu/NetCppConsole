#pragma once
#include "Shape.h"

ref class Square :
    public Shape
{
public:
    int GetArea(int x) override;
    int GetTotalSide(int x) override;

};

