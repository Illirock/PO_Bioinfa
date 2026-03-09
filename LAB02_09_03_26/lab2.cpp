#include <iostream>

using namespace std;

class Figure {
public:
	Figure() {
		cout << "Podaj kolor:" << endl;
		cin >> color;
	}
protected:
	string color;

	void desc() {
		cout << "Kolor: " << color << endl;
	}
};

class Circle : Figure {
public:
	Circle() {
		cout << "Podaj promien:" << endl;
		cin >> radius;
	}

	void desc() {
		float area = pi * radius * radius;
		float perimeter = 2 * pi * radius;

		cout << "Obwod: " << perimeter << "\nPole: " << area << "\nKolor: " << color << endl;
	}
private:
	float pi = 3.14;
protected:
	float radius;
};

class Squere : Figure {
public:
	Squere() {
		cout << "Podaj bok:" << endl;
		cin >> a;
	}

	void desc() {
		float area = a * a;
		float perimeter = 4 * a;

		cout << "Obwod: " << perimeter << "\nPole: " << area << "\nKolor: " << color << endl;
	}
protected:
	float a;
};



int main() {
	Circle kolko;
	kolko.desc();
	Squere kwadrat;
	kwadrat.desc();
}