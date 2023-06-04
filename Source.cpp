#include <iostream>
#include <memory>
#include <vector>
#include <cmath>

using namespace std;

class Matrix {
public:
	virtual int size() const = 0;
	virtual double get(int i, int j) const = 0;

	Matrix(const Matrix& mtrx) = delete;
	virtual ~Matrix() = default;
	Matrix operator=(const Matrix& mtrx) = delete;
protected:
	Matrix() = default;
};

