#include <iostream>
#include "KodeXVector.cpp"

using namespace std;


int main() {
    cout << "Init empty vector" << endl;
    KodeXVector<int> vec(10);
    cout << "Data: " << endl;
    cout << vec.toString() << endl;
    cout << "Modified by index: " << endl;
    vec[10] = 228;
    cout << vec.toString();

    cout << endl;
    int p[] = {1, 2, 3, 4, 5};
    KodeXVector<int> vec2(p, 5);
    cout << vec2;

    KodeXVector<int> sum = vec + vec2;
    cout << endl << "Sum: " << sum;

    KodeXVector<int> multiply = vec * vec2;
    cout << endl << "Multiply: " << multiply;

    return 0;
}