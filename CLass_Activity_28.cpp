#include <iostream>
#include "DoubleToString.hpp"

using namespace std;

int main() {
    double number = 12.34;
    string str = doubleToString(number, 1);
    cout << str << endl;
    return 0;
}
