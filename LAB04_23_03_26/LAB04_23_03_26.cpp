#include <iostream>

using namespace std;

class Vector {
protected:
	int element1, element2;

public:
	Vector(int ele1 = 0, int ele2 = 0) {
		this->element1 = ele1;
		this->element2 = ele2;
	}

	friend Vector operator+(const Vector& v1, const Vector& v2);

	Vector& operator++() {
		this->element1++;
		this->element2++;
		return *this;
	}

	void show() {
		cout << "Element 1:" << element1 << "\nElement 2:" << element2 << endl;
	}
};

Vector operator+(const Vector& v1, const Vector& v2){
	return Vector(v1.element1 + v2.element1, v1.element2 + v2.element2);
}

int main() {
	Vector A(4, 7);
	Vector B(6, 7);

	cout << "A" << endl;
	A.show();
	cout << "B" << endl;
	B.show();

	cout << "\nA + B" << endl;
	Vector C = A + B;
	C.show();

	cout << "\n++A" << endl;
	++A;
	A.show();
}