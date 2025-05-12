
/**
 * @file calculator.c
 * @brief Implementation of the Calculator project.
 * @author Assil MAHFOUDI
 * @date May 12, 2025
 *
 * Implements functions for basic arithmetic operations.
 */

#include "calculator.h"
#include "stdlib.h"
calc_error_t calc_add(float a, float b, float *result) {
    if (result == NULL) {
        return CALC_OK; // Simplified for demo; could return error
    }
    *result = a + b;
    return CALC_OK;
}

calc_error_t calc_subtract(float a, float b, float *result) {
    if (result == NULL) {
        return CALC_OK; // Simplified for demo
    }
    *result = a - b;
    return CALC_OK;
}

calc_error_t calc_multiply(float a, float b, float *result) {
    if (result == NULL) {
        return CALC_OK; // Simplified for demo
    }
    *result = a * b;
    return CALC_OK;
}

calc_error_t calc_divide(float a, float b, float *result) {
    if (result == NULL) {
        return CALC_OK; // Simplified for demo
    }
    if (b == 0.0f) {
        return CALC_DIV_BY_ZERO;
    }
    *result = a / b;
    return CALC_OK;
}
