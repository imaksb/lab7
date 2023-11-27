#pragma once
#include <iostream>
#include "TFunction.h"
#include <cmath>

class THyperbola : public TFunction {
private:
    double a; 
    double b; 

public:
    THyperbola(double a, double b) {  
        this->a = a;
        this->b = b;
    }

    virtual double GetY(double x) override {
        double y = b * sqrt((x * x) / (a * a) - 1);
        return y;
    }

    virtual void Print() override {
        std::cout << "Hyperbola: (x^2 / " << a * a << ") - (y^2 / " << b * b << ") = 1" << std::endl;
    }
};