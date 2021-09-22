#ifndef LAYER_H
#define LAYER_H

#include <vector>

#include "Neuron.h"

class Layer
{
public:
	Layer(int size);

private:
	int m_size;
	std::vector<Neuron*> m_neurons;
};

#endif // !LAYER_H
