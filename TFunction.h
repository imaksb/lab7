#pragma once

class TFunction {
public:
	virtual double GetY(double x) = 0; 
	virtual void Print() = 0;
	virtual ~TFunction() {}
};
