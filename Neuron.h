#ifndef NEURON_H
#define NEURON_H

#include <cmath>

class Neuron
{
public:
	Neuron(double value);

	void activate();
	void derive();

	double getValue();
	double getActivateValue();
	double getDerivedValue();
private:
	double m_value;
	double m_activate_value;
	double m_derived_value;
};

#endif
