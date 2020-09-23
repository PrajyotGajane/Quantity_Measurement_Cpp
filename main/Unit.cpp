#include "Unit.h"

Unit::Unit(double value, UnitType type)
{
    this->base_value = value;
    this->type = type;
}

bool Unit::operator==(Unit other)
{
    if (this->type == other.type)
        return (this->base_value == other.base_value);
    return false;
}

Unit Unit::FEET(12.0, UnitType::FEET);
Unit Unit::INCH(1.0, UnitType::INCH);
Unit Unit::YARD(36.0, UnitType::LENGTH);