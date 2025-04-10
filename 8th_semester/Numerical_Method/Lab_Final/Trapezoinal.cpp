#include <iostream>
#include <cmath>  // use cmath in C++

using namespace std;

/* Define function */
double f(double x) {
    return 1 / (1 + pow(x, 2));
}

int main() {
    double lower, upper, integration = 0.0, stepSize, k;
    int i, subInterval;

    /* Input */
    cout << "Enter lower limit of integration: ";
    cin >> lower;
    cout << "Enter upper limit of integration: ";
    cin >> upper;
    cout << "Enter number of sub intervals: ";
    cin >> subInterval;

    /* Calculation */
    stepSize = (upper - lower) / subInterval;

    integration = f(lower) + f(upper);

    for (i = 1; i <= subInterval - 1; i++) {
        k = lower + i * stepSize;
        integration += 2 * f(k);
    }

    integration = integration * stepSize / 2;

    cout << endl << "Required value of integration is: " << integration <<endl;

    return 0;
}
