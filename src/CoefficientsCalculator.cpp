//
// Created by Алексей Заузин on 14.01.2023.
//

#include <cmath>
#include "CoefficientsCalculator.h"

CalculatedCoefficients CoefficientsCalculator::calculateCoefficients(std::vector<ElementConcentrationPoint> A) {
    double s1 = A.size() - 1;
    double s2 = 0;
    double s3 = 0;
    double s4 = 0;
    double s5 = 0;
    double s6 = 0;
    double k, n, r, x, y;

    for(int i = 1; i <= A.size() - 1; i++) {
        x = log(A[i - 1].concentration);
        y = log(fabs(A[i].concentration - A[i - 1].concentration) / (A[i].time - A[i - 1].time));
        s2 += x;
        s3 += y;
        s4 += x * x;
        s5 += x * y;
        s6 += y * y;
    }

    k = exp((s3 * s4 - s2 * s5) / (s1 * s4 - s2 * s2));
    n = (s1 * s5 - s2 * s3) / (s1 * s4 - s2 * s2);
    r = (s1 * s5 - s2 * s3) / sqrt((s1 * s4 - s2 * s2) * (s1 * s6 - s3 * s3));

    return CalculatedCoefficients(k, n, r);
}
