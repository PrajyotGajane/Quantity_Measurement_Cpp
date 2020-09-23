#include "QuantityMeasurement.h"

double QuantityMeasurement::getConvertedValue(Unit type, double value)
{
    return type.base_value * value;
}

double QuantityMeasurement::addTwoUnits(double value_1, double value_2)
{
    return value_1 + value_2;
}

bool QuantityMeasurement::operator==(QuantityMeasurement other)
{
    return typeid(*this) == typeid(other);
}

double QuantityMeasurement::temperatureConversion(UnitType type, double value)
{
    double temperature = value;
    if (type == UnitType::CELSIUS)
    {
        temperature = (value * conversion_factor_one) + conversion_factor_two;
    }
    return temperature;
}