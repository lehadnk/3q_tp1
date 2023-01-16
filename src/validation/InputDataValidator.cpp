//
// Created by Алексей Заузин on 14.01.2023.
//

#include <vector>
#include "InputDataValidator.h"

ValidationResult InputDataValidator::validate(std::vector<ElementConcentrationPoint> A, double bConcentration, double cConcentration) {
    if (bConcentration <= 0.0) {
        return ValidationResult(false, "bConcentration should be more than 0");
    }
    if (cConcentration <= 0.0) {
        return ValidationResult(false, "cConcentration should be more than 0");
    }
    if (A.size() == 0) {
        return ValidationResult(false, "Number of A elements should be more than 0 ");
    }
    if (A[0].concentration <= 0.0) {
        return ValidationResult(false, "Invalid A[0] concentration: should be more than 0");
    }
    if (A[0].time < 0.0) {
        return ValidationResult(false, "Invalid A[0] time: should not be negative");
    }

    if (A.size() > 1) {
        for(int i = 1; i <= A.size() - 1; i++) {
            if (A[i].time <= 0.0) {
                return ValidationResult(false, "Invalid A[" + std::to_string(i) + "] time: should not be negative");
            }
            if (A[i].concentration <= 0.0) {
                return ValidationResult(false, "Invalid A[" + std::to_string(i) + "] concentration: should not be negative");
            }
            if (A[i].time <= A[i - 1].time) {
                return ValidationResult(false, "Invalid A[" + std::to_string(i) + "] time: should be more than in previous entry");
            }
            if (A[i].concentration == A[i - 1].concentration) {
                return ValidationResult(false, "Invalid A[" + std::to_string(i) + "] concentration: different than in previous entry");
            }
        }
    }

    return ValidationResult(true);
}
