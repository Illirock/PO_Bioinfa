#include <iostream>

using namespace std;

class Animal {
public:
	static int animal_counter;

	Animal() {
		animal_counter++;
	}

	void get_counter() { cout << animal_counter << endl; }

	virtual void get_voice() { cout << "Sample Sound" << endl; }
};

int Animal :: animal_counter = 0;

class Dog: Animal {
public:
	void get_voice() override { cout << "Woof Woof" << endl; }
};

class Cat : Animal {
public:
	void get_voice() override { cout << "Miau Miau" << endl; }
};

int main() {
	Cat kot;
	kot.get_voice();
	Dog pies;
	pies.get_voice();
	cout << "Ilość obiektow: " << Animal::animal_counter << endl;
}