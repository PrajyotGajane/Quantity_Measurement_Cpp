#include "QuantityMeasurement.h"

double QuantityMeasurement::getConvertedValue(Unit type, double value)
{
    return type.base_value * value;
}

bool QuantityMeasurement::operator==(QuantityMeasurement other)
{
    return typeid(*this) == typeid(other);
}