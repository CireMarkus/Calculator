#pragma once

class Calculator {
private:
	static double mValue;
	Calculator(); // Constructor is private so users cannot instantiate the class. 
public:
	
	~Calculator();

	static void add(double value);

	static void subtract(double value);

	static void multiply(double value);

	static void divide(double value);

	static double getValue();

	static void clearValue();
};
