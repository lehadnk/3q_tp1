//
// Created by Алексей Заузин on 14.01.2023.
//

#ifndef EXERCISE04_COEFFICIENTSCALCULATOR_H
#define EXERCISE04_COEFFICIENTSCALCULATOR_H


#include <vector>
#include "dto/CalculatedCoefficients.h"
#include "dto/ElementConcentrationPoint.h"

class CoefficientsCalculator {
    public:
        CalculatedCoefficients calculateCoefficients(std::vector<ElementConcentrationPoint> A);
};


#endif //EXERCISE04_COEFFICIENTSCALCULATOR_H
