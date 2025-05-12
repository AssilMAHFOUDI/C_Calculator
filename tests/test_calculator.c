
/**
 * @file test_calculator.c
 * @brief Unit tests for the Calculator project using Unity.
 * @author Assil MAHFOUDI
 * @date May 12, 2025
 *
 * Tests all calculator operations: addition, subtraction, multiplication, division.
 */

#include "unity.h"
#include "calculator.h"

void setUp(void) {
    // Setup code (empty for now)
}

void tearDown(void) {
    // Cleanup code (empty for now)
}

void test_calc_add(void) {
    float result;

    // Positive numbers
    TEST_ASSERT_EQUAL_INT(CALC_OK, calc_add(2.5f, 3.5f, &result));
    TEST_ASSERT_EQUAL_FLOAT(6.0f, result);

    // Negative numbers
    TEST_ASSERT_EQUAL_INT(CALC_OK, calc_add(-1.0f, -2.0f, &result));
    TEST_ASSERT_EQUAL_FLOAT(-3.0f, result);

    // Zero
    TEST_ASSERT_EQUAL_INT(CALC_OK, calc_add(0.0f, 5.0f, &result));
    TEST_ASSERT_EQUAL_FLOAT(5.0f, result);

    // Large numbers
    TEST_ASSERT_EQUAL_INT(CALC_OK, calc_add(1000000.0f, 2000000.0f, &result));
    TEST_ASSERT_EQUAL_FLOAT(3000000.0f, result);
}

void test_calc_subtract(void) {
    float result;

    // Positive numbers
    TEST_ASSERT_EQUAL_INT(CALC_OK, calc_subtract(5.0f, 2.0f, &result));
    TEST_ASSERT_EQUAL_FLOAT(3.0f, result);

    // Negative result
    TEST_ASSERT_EQUAL_INT(CALC_OK, calc_subtract(2.0f, 5.0f, &result));
    TEST_ASSERT_EQUAL_FLOAT(-3.0f, result);

    // Zero
    TEST_ASSERT_EQUAL_INT(CALC_OK, calc_subtract(5.0f, 5.0f, &result));
    TEST_ASSERT_EQUAL_FLOAT(0.0f, result);

    // Negative numbers
    TEST_ASSERT_EQUAL_INT(CALC_OK, calc_subtract(-1.0f, -2.0f, &result));
    TEST_ASSERT_EQUAL_FLOAT(1.0f, result);
}

void test_calc_multiply(void) {
    float result;

    // Positive numbers
    TEST_ASSERT_EQUAL_INT(CALC_OK, calc_multiply(3.0f, 4.0f, &result));
    TEST_ASSERT_EQUAL_FLOAT(12.0f, result);

    // Negative numbers
    TEST_ASSERT_EQUAL_INT(CALC_OK, calc_multiply(-2.0f, 3.0f, &result));
    TEST_ASSERT_EQUAL_FLOAT(-6.0f, result);

    // Zero
    TEST_ASSERT_EQUAL_INT(CALC_OK, calc_multiply(5.0f, 0.0f, &result));
    TEST_ASSERT_EQUAL_FLOAT(0.0f, result);

    // Small numbers
    TEST_ASSERT_EQUAL_INT(CALC_OK, calc_multiply(0.1f, 0.2f, &result));
    TEST_ASSERT_EQUAL_FLOAT(0.02f, result);
}

void test_calc_divide(void) {
    float result;

    // Positive numbers
    TEST_ASSERT_EQUAL_INT(CALC_OK, calc_divide(10.0f, 2.0f, &result));
    TEST_ASSERT_EQUAL_FLOAT(5.0f, result);

    // Negative numbers
    TEST_ASSERT_EQUAL_INT(CALC_OK, calc_divide(-6.0f, 2.0f, &result));
    TEST_ASSERT_EQUAL_FLOAT(-3.0f, result);

    // Division by zero
    TEST_ASSERT_EQUAL_INT(CALC_DIV_BY_ZERO, calc_divide(5.0f, 0.0f, &result));

    // Small numbers
    TEST_ASSERT_EQUAL_INT(CALC_OK, calc_divide(0.2f, 0.1f, &result));
    TEST_ASSERT_EQUAL_FLOAT(2.0f, result);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_calc_add);
    RUN_TEST(test_calc_subtract);
    RUN_TEST(test_calc_multiply);
    RUN_TEST(test_calc_divide);
    return UNITY_END();
}