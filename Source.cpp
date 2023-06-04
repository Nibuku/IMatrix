#include <iostream>
#include <memory>
#include <vector>
#include <cmath>

using namespace std;

class IMatrix {
public:
	virtual int size() const = 0;
	virtual double get(int i, int j) const = 0;

	IMatrix(const IMatrix& mtrx) = delete;
	virtual ~IMatrix() = default;
	IMatrix operator=(const IMatrix& mtrx) = delete;
protected:
	IMatrix() = default;
};