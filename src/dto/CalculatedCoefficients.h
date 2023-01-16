//
// Created by Алексей Заузин on 14.01.2023.
//
#pragma once
struct CalculatedCoefficients {
    CalculatedCoefficients(double k, double n, double r) {
        this->k = k;
        this->n = n;
        this->r = r;
    }

    double k;
    double n;
    double r;
};