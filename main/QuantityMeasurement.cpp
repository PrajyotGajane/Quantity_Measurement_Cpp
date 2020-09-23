#include "QuantityMeasurement.h"

double QuantityMeasurement::returnCovertedValue(Unit type, double value)
{
    return type.base_value * value;
}
