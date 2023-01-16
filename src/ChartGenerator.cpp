//
// Created by Алексей Заузин on 14.01.2023.
//

#include <cmath>
#include "ChartGenerator.h"

CalculatedChart ChartGenerator::generate(
    std::vector<ElementConcentrationPoint> A,
    double bConcentration,
    double cConcentration,
    CalculatedCoefficients coefficients
) {
    std::vector<CalculatedChartPoints> points = std::vector<CalculatedChartPoints>();
    bool chartIsGrowing = this->chartDirectionDeterminer.isChartGrowing(A);

    CalculatedChartPoints initialPoints = CalculatedChartPoints(
            A[0].time,
            A[0].concentration,
            A[0].concentration,
            bConcentration,
            cConcentration
    );
    points.emplace_back(initialPoints);

    double cA = A[0].concentration;
    double dispersion = 0;
    for (int i = 1; i <= A.size() - 1; i++) {
        double tDelta = A[i].time - A[i - 1].time;
        bConcentration = bConcentration + coefficients.k * 2 * pow(cA, coefficients.n) * tDelta;
        cConcentration = cConcentration + coefficients.k * pow(cA, coefficients.n) * tDelta;
        if (chartIsGrowing) {
            cA = cA + coefficients.k * pow(cA, coefficients.n) * tDelta;
        } else {
            cA = cA - coefficients.k * pow(cA, coefficients.n) * tDelta;
        }

        points.emplace_back(
                A[i].time,
                A[i].concentration,
                cA,
                bConcentration,
                cConcentration

        );

        dispersion += pow(A[i].concentration - cA, 2);
    }

    return {points, dispersion};
}
