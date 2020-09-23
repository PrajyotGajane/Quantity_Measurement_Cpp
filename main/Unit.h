#pragma once

#include "UnitType.h"

class Unit
{
public:
    Unit(double, UnitType);

public:
    UnitType type;
    double base_value;
    static Unit FEET;
};