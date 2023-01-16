#include <vector>
#include "CalculatedChartPoints.h"

//
// Created by Алексей Заузин on 14.01.2023.
//
struct CalculatedChart {
    CalculatedChart(std::vector<CalculatedChartPoints> points, double dispersion) {
        this->points = points;
        this->dispersion = dispersion;
    }

    std::vector<CalculatedChartPoints> points;
    double dispersion;
};