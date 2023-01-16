//
// Created by Alexey Zauzin on 12.01.2023.
//
#pragma once
struct ElementConcentrationPoint {
    ElementConcentrationPoint(double time, double concentration) {
        this->time = time;
        this->concentration = concentration;
    }

    double time;
    double concentration;
};