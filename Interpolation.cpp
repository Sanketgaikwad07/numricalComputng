#include <iostream>
using namespace std;

// Function to perform linear interpolation
double linearInterpolate(double x0, double y0, double x1, double y1, double x) {
    return y0 + ( (y1 - y0) / (x1 - x0) ) * (x - x0);
}

int main() {
    double x0 = 1.0, y0 = 2.0;
    double x1 = 3.0, y1 = 6.0;
    double x = 2.0;

    double y = linearInterpolate(x0, y0, x1, y1, x);

    cout << "Interpolated value at x = " << x << " is y = " << y << endl;

    return 0;
}
