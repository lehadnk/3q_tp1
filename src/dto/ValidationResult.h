//
// Created by Алексей Заузин on 14.01.2023.
//
#include <string>

struct ValidationResult {
    ValidationResult(bool isSuccess, std::string validationError = "") {
        this->isSuccess = isSuccess;
        this->validationError = validationError;
    }

    bool isSuccess;
    std::string validationError;
};