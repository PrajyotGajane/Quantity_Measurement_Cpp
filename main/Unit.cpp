#include "Unit.h"

Unit::Unit(double value, UnitType type)
{
    this->base_value = value;
    this->type = type;
}

Unit Unit::FEET(12.0, UnitType::LENGTH);