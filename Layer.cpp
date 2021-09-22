#include "Layer.h"

Layer::Layer(int size) : m_size(size)
{
	for (int i = 0; i < m_size; i++)
	{
		Neuron* n = new Neuron(0.00);
		m_neurons.push_back(n);
	}
}
