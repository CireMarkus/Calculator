#include "Calculator.h"

double Calculator::mValue = 0;

Calculator::Calculator() 
{}

Calculator::~Calculator() {}

void Calculator::add(double value) {
	mValue = mValue + value;
}

void Calculator::subtract(double value) {
	mValue = mValue - value;
}

void Calculator::multiply(double value) {
	mValue = mValue * value;
}

void Calculator::divide(double value) {
	if (value != 0) {
		mValue = mValue / value;
	}
}

double Calculator::getValue() {
	return mValue;
}

void Calculator::clearValue() {
	mValue = 0.0;
}


