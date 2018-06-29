#pragma once
const double beta = 1;
class Strategy
{
public:
	Strategy();
	virtual ~Strategy();
	virtual double Compute(double x) = 0;
	virtual double DirCompute(double x, double fx) = 0;
};

