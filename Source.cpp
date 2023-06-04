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

class Minor : public Matrix {
	const Matrix& matrix;
	int line;
	int column;

public:
	Minor(const Matrix& matrix, int line, int column) : matrix(matrix), line(line), column(column) {};
	int size() const override {
		return matrix.size() - 1;
	}
	double get(int i, int j) const override {
		if (i >= line)
			++i;
		if (j >= column)
			++j;
		return matrix.get(i, j);
	}
};

int main()
{
	Matrixs one;
	cout << one.get(2, 3) << endl; 
	Minor ll(one,4,3);
	cout << ll.get(2, 3) << endl;
}