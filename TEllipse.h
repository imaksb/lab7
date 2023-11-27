#pragma once
#include <iostream>
#include <cmath>
#include "TFunction.h"

class TElipse : public TFunction {
private: 
	double a;
	double b;
public:
	TElipse(double a, double b) {
		this->a = a;
		this->b = b;
	}

	virtual double GetY(double x) override {
		int res = (int)(1 - (x * x) / (this->a * b));
		return b * res; // 3.0 *  6
	}

	virtual void Print() override {
		std::cout << "Ellipse: (x^2 / " << a * a << ") + (y^2 / " << b * b << ") = 1" << std::endl;
	}
};