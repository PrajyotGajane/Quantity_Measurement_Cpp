#pragma once
#include <iostream>
#include <typeinfo>
#include "UnitType.h"

class Unit
{
public:
    Unit(double, UnitType);

public:
    UnitType type;
    double base_value;
    bool operator==(Unit);
    static Unit FEET;
    static Unit INCH;
};