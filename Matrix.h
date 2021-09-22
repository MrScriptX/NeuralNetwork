#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

class Matrix
{
public:
	Matrix(int rows, int cols, bool random);
	Matrix* transpose();

	void setValue(int r, int c, double v);
	double getValue(int r, int c);

private:
	int m_rows;
	int m_cols;

	std::vector<std::vector<double>> m_values;
};

#endif
