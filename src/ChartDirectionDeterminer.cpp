//
// Created by Алексей Заузин on 14.01.2023.
//

#include "ChartDirectionDeterminer.h"

bool ChartDirectionDeterminer::isChartGrowing(std::vector<ElementConcentrationPoint> A) {
    if (A.size() < 2) {
        return true;
    }

    int chartDirection = 0;
    for (int i = 1; i <= A.size() - 1; i++) {
        if (A[i].concentration >= A[i - 1].concentration) {
            chartDirection += 1;
        } else {
            chartDirection -= 1;
        }
    }

    return chartDirection >= 0;
}
