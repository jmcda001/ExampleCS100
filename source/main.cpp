#include <iostream>
#include "../header/circle.hpp"

using namespace std;

int main() {
    Circle c1(5);

    cout << "A circle with a radius of 5 has an area of " << c1.area() << endl;

    return 0;
}
