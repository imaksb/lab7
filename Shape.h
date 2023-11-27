#pragma once
#include <iostream>
#include "TFunction.h"

class Shape {
public:
    void processFunction(TFunction * object, double x) {
        double result = object->GetY(x);
        std::cout << "Function Value at x = " << x << ": " << result << std::endl; 
    }
};