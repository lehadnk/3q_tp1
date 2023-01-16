//
// Created by Алексей Заузин on 14.01.2023.
//

#ifndef EXERCISE04_INPUTDATAVALIDATOR_H
#define EXERCISE04_INPUTDATAVALIDATOR_H
#include <string>
#include "../dto/ValidationResult.h"
#include "../dto/ElementConcentrationPoint.h"

class InputDataValidator {
    public:
        ValidationResult validate(std::vector<ElementConcentrationPoint> A, double bConcentration, double cConcentration);
};


#endif //EXERCISE04_INPUTDATAVALIDATOR_H
