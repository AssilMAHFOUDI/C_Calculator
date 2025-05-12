
/**
 * @file calculator.h
 * @brief Header file for the Calculator project.
 * @author Assil MAHFOUDI
 * @date May 12, 2025
 *
 * Declares functions for basic arithmetic operations: addition, subtraction,
 * multiplication, and division.
 */

#ifndef CALCULATOR_H
#define CALCULATOR_H

/**
 * @brief Error codes for calculator operations.
 */
typedef enum {
    CALC_OK = 0,           /**< Operation successful */
    CALC_DIV_BY_ZERO = -1  /**< Division by zero error */
} calc_error_t;

/**
 * @brief Adds two floating-point numbers.
 * @param a First number.
 * @param b Second number.
 * @param result Pointer to store the result.
 * @return CALC_OK on success.
 */
calc_error_t calc_add(float a, float b, float *result);

/**
 * @brief Subtracts two floating-point numbers.
 * @param a First number.
 * @param b Second number.
 * @param result Pointer to store the result.
 * @return CALC_OK on success.
 */
calc_error_t calc_subtract(float a, float b, float *result);

/**
 * @brief Multiplies two floating-point numbers.
 * @param a First number.
 * @param b Second number.
 * @param result Pointer to store the result.
 * @return CALC_OK on success.
 */
calc_error_t calc_multiply(float a, float b, float *result);

/**
 * @brief Divides two floating-point numbers.
 * @param a Numerator.
 * @param b Denominator.
 * @param result Pointer to store the result.
 * @return CALC_OK on success, CALC_DIV_BY_ZERO if b is zero.
 */
calc_error_t calc_divide(float a, float b, float *result);

#endif /* CALCULATOR_H */