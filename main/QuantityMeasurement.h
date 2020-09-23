#pragma once
#include "Unit.h"
#include <iostream>

class QuantityMeasurement
{
public:
    double getConvertedValue(Unit, double);
    bool operator==(QuantityMeasurement *);
    bool operator==(QuantityMeasurement);
    double addTwoUnits(double,double);
};