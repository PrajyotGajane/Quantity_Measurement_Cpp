#pragma once
#include <iostream>
#include <typeinfo>
#include "UnitType.h"

class Unit
{
public:
    Unit();
    Unit(double, UnitType);
    UnitType type;
    double base_value;
    bool operator==(Unit);
    bool operator==(UnitType);
    static Unit FEET;
    static Unit INCH;
    static Unit YARD;
    static Unit CENTIMETER;
    static Unit GALLON;
    static Unit LITRE;
    static Unit MILLILITRE;
    static Unit KILOGRAM;
    static Unit GRAM;
    static Unit TONNE;
    static Unit FAHRENHEIT;
    static Unit CELSIUS;
};