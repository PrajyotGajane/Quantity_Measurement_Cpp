#include "Unit.h"

Unit::Unit(double value, UnitType type)
{
    this->base_value = value;
    this->type = type;
}

bool Unit::operator==(Unit other)
{
    if (typeid(*this) == typeid(other))
        return (this->base_value == other.base_value);
    return false;
}

Unit Unit::FEET(12.0, UnitType::LENGTH);
Unit Unit::INCH(1.0, UnitType::LENGTH);