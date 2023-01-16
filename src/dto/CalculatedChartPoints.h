//
// Created by Алексей Заузин on 14.01.2023.
//
struct CalculatedChartPoints {
    CalculatedChartPoints(double time, double inputA, double calculatedA, double calculatedB, double calculatedC) {
        this->time = time;
        this->inputA = inputA;
        this->calculatedA = calculatedA;
        this->calculatedB = calculatedB;
        this->calculatedC = calculatedC;
    }

    double time;
    double inputA;
    double calculatedA;
    double calculatedB;
    double calculatedC;
};