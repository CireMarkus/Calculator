#pragma once

class Calculator {
private:
	double mValue;

public:
	Calculator();
	~Calculator();

	void add(double value);

	void subtract(double value);

	void multiply(double value);

	void divide(double value);

	double getValue();

	void clearValue();
};
