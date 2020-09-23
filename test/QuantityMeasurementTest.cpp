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
    Unit first_feet(1, UnitType::LENGTH);
    Unit second_feet(1, UnitType::LENGTH);
    ASSERT_TRUE(first_feet == second_feet);
}

TEST_F(QuantityMeasurementTest, given_one_feet_and_twelve_inch_should_return_equal)
{
    double result1 = quantity_measurement.returnCovertedValue(Unit::FEET, 1);
    double result2 = quantity_measurement.returnCovertedValue(Unit::INCH, 12);
    ASSERT_EQ(result1, result2);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}