#include <gtest/gtest.h>
#include "../main/QuantityMeasurement.h"

// Set up to use Quantity Measurement reference in multiple test cases
struct QuantityMeasurementTest : testing::Test
{
    QuantityMeasurement quantity_measurement;
    QuantityMeasurement *quantity_measurement_ref;
    QuantityMeasurementTest()
    {
        quantity_measurement_ref = new QuantityMeasurement();
    }

    ~QuantityMeasurementTest()
    {
        delete quantity_measurement_ref;
    }
};

//UC 1
TEST_F(QuantityMeasurementTest, _zero_feet_and_zero_feet__should_be_equal)
{
    double first_value = quantity_measurement.returnCovertedValue(Unit::FEET, 0);
    double second_value = quantity_measurement.returnCovertedValue(Unit::FEET, 0);
    ASSERT_EQ(first_value, second_value);
}

TEST(QuantityMeasurement_Test, first_object_and_second_ref_should_be_equal)
{
    QuantityMeasurement *first_ref = new QuantityMeasurement();
    QuantityMeasurement *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

TEST(QuantityMeasurement_Test, first_object_and_second_object_type_should_be_equal)
{
    QuantityMeasurement first_ref;
    QuantityMeasurement second_ref;
    ASSERT_TRUE(first_ref == second_ref);
}

TEST(QuantityMeasurement_Test, first_object_and_second_object_value_should_be_equal)
{
    Unit first_feet(1, UnitType::FEET);
    Unit second_feet(1, UnitType::FEET);
    ASSERT_TRUE(first_feet == second_feet);
}

TEST_F(QuantityMeasurementTest, given_one_feet_and_twelve_inch_should_return_equal)
{
    double result1 = quantity_measurement.returnCovertedValue(Unit::FEET, 1);
    double result2 = quantity_measurement.returnCovertedValue(Unit::INCH, 12);
    ASSERT_EQ(result1, result2);
}

//UC 1 for INCH
TEST(QuantityMeasurement_Test, _first_object_and_second_object_type_should_be_equal)
{
    Unit first_inch(1, UnitType::INCH);
    Unit second_inch(1, UnitType::INCH);
    ASSERT_TRUE(first_inch == second_inch);
}

TEST(QuantityMeasurement_Test, first_object_and_second_object_ref_should_be_equal)
{
    Unit *first_ref = new Unit(0, UnitType::INCH);
    Unit *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

TEST(QuantityMeasurement_Test, _INCH_first_object_and_second_object_value__when_not_equal__should_return_false)
{
    Unit first_feet(4, UnitType::INCH);
    Unit second_feet(1, UnitType::INCH);
    ASSERT_FALSE(first_feet == second_feet);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}