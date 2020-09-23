#pragma once
#include "Unit.h"
#include <iostream>
#include <typeinfo>

class QuantityMeasurement
{
public:
    double returnCovertedValue(Unit, double);
    bool operator==(QuantityMeasurement *);
    bool operator==(QuantityMeasurement);
};