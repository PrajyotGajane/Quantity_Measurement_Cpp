#pragma once
#include "Unit.h"
#include <iostream>

class QuantityMeasurement
{
private:
    double conversion_factor_one = (9.0 / 5);
    double conversion_factor_two = 32;

public:
    double getConvertedValue(Unit, double);
    bool operator==(QuantityMeasurement *);
    bool operator==(QuantityMeasurement);
    double addTwoUnits(double, double);
    double temperatureConversion(UnitType, double);
};