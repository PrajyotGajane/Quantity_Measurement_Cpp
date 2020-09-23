#include <gtest/gtest.h>
#include "../main/QuantityMeasurement.h"

// Set up to use Quantity Measurement reference in multiple test cases
struct QuantityMeasurementTest : testing::Test
{
	QuantityMeasurement quantity_measurement;
};

TEST_F(QuantityMeasurementTest, _zero_feet_and_zero_feet__should_be_equal)
{
    double first_value = quantity_measurement.returnCovertedValue(Unit::FEET, 0);
    double second_value = quantity_measurement.returnCovertedValue(Unit::FEET, 0);
    ASSERT_EQ(first_value, second_value);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}