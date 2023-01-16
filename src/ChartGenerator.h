//
// Created by Алексей Заузин on 14.01.2023.
//

#ifndef EXERCISE04_CHARTGENERATOR_H
#define EXERCISE04_CHARTGENERATOR_H

#include <vector>
#include "dto/CalculatedCoefficients.h"
#include "ChartDirectionDeterminer.h"
#include "dto/CalculatedChart.h"

class ChartGenerator {

    private:
            ChartDirectionDeterminer chartDirectionDeterminer;

    public:
        CalculatedChart generate(std::vector<ElementConcentrationPoint> A, double bConcentration, double cConcentration, CalculatedCoefficients coefficients);

        ChartGenerator(ChartDirectionDeterminer chartDirectionDeterminer)
        {
            this->chartDirectionDeterminer = chartDirectionDeterminer;
        }
};


#endif //EXERCISE04_CHARTGENERATOR_H
