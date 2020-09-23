#pragma once
#include "Unit.h"
#include <iostream>

class QuantityMeasurement
{
public:
    double returnCovertedValue(Unit, double);
    bool operator==(QuantityMeasurement *);
    bool operator==(QuantityMeasurement);
};