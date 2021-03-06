#include "Unit.h"

Unit::Unit(){};

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
Unit Unit::CENTIMETER(0.4, UnitType::LENGTH);
Unit Unit::GALLON(3.78, UnitType::VOLUME);
Unit Unit::LITRE(1, UnitType::VOLUME);
Unit Unit::MILLILITRE(0.001, UnitType::VOLUME);
Unit Unit::KILOGRAM(1, UnitType::WEIGHT);
Unit Unit::GRAM(0.001, UnitType::WEIGHT);
Unit Unit::TONNE(1000, UnitType::WEIGHT);
Unit Unit::FAHRENHEIT;
Unit Unit::CELSIUS;