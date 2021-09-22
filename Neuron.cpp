#include "Neuron.h"

Neuron::Neuron(double value) : m_value(value)
{
	activate();
	derive();
}

void Neuron::activate()
{
	m_activate_value = m_value / (1 + std::abs(m_value));
}

void Neuron::derive()
{
	m_derived_value = m_activate_value * (1 - m_activate_value);
}

double Neuron::getValue()
{
	return m_value;
}

double Neuron::getActivateValue()
{
	return m_activate_value;
}

double Neuron::getDerivedValue()
{
	return m_derived_value;
}
