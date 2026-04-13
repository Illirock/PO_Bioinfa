#include <iostream>

using namespace std;

const int SIZE = 5;

template <typename Type>
class Array {
private:
    Type arr[SIZE];
public:
    Array(Type input[SIZE]) {
        for (int i = 0; i < SIZE; i++) {
            arr[i] = input[i];
        }
    }

    Type findMax() {
        Type max = arr[0];

        for (int i = 1; i < SIZE; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }
};


int main() {
    int int_array[SIZE] = { 6, 7, 4, 2, 0 };
    float float_array[SIZE] = { 6.7, 4.7, 2.1, 3.7, 6.9 };
    char char_array[SIZE] = { 'M', 'u', 'R', 'a', 'D' };

    Array<int> int_object(int_array);
    Array<float> float_object(float_array);
    Array<char> char_object(char_array);

    cout << "Max int: " << int_object.findMax() << endl;
    cout << "Max float: " << float_object.findMax() << endl;
    cout << "Max char: " << char_object.findMax() << endl;

    return 0;
}
