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

class Matrixs : public Matrix {
	vector <double> _matrix;
	int _size;

public:
	Matrixs() : _size(5)
	{
		_matrix.push_back(2);
		_matrix.push_back(4);
		_matrix.push_back(7);
		_matrix.push_back(2);
		_matrix.push_back(0);
		_matrix.push_back(8);
		_matrix.push_back(11);
		_matrix.push_back(4);
		_matrix.push_back(5);
		_matrix.push_back(6);
		_matrix.push_back(2);
		_matrix.push_back(24);
		_matrix.push_back(1);
		_matrix.push_back(2);
		_matrix.push_back(7);
		_matrix.push_back(9);
		_matrix.push_back(3);
		_matrix.push_back(2);
		_matrix.push_back(7);
		_matrix.push_back(3);
		_matrix.push_back(11);
		_matrix.push_back(3);
		_matrix.push_back(5);
		_matrix.push_back(4);
		_matrix.push_back(2);

	}

	int size() const override {
		return _size;
	};
	double get(int i, int j) const override {
		return _matrix[i * _size + j];
	};


};

int main()
{
	Matrixs matrix;
	cout << matrix.get(2, 3) << endl;
}