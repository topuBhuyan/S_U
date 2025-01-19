#include<bits/stdc++.h>
using namespace std;

// Define the function for which we are finding the root
double f(double x) {
    return x * x * x - x - 2; // Example: f(x) = x^3 - x - 2
}

void bisectionMethod(double a, double b, double tolerance, int maxIterations) {
    if (f(a) * f(b) >= 0) {
        cout << "Error: f(a) and f(b) must have opposite signs." << endl;
        return;
    }

    double c; // Midpoint
    int iteration = 1;

    // Print table header
    cout << left << setw(10) << "Iteration"
         << setw(15) << "a"
         << setw(15) << "b"
         << setw(15) << "c"
         << setw(20) << "f(c)" << endl;
    cout << string(75, '-') << endl;

    while (iteration <= maxIterations) {
        c = (a + b) / 2.0; // Calculate the midpoint
        double fc = f(c);

        // Print current iteration details
        cout << left << setw(10) << iteration
             << setw(15) << a
             << setw(15) << b
             << setw(15) << c
             << setw(20) << fc << endl;

        // Check if the root is found or if the tolerance is met
        if (fabs(fc) < tolerance || fabs(b - a) < tolerance) {
            cout << "\nRoot found: " << c << " after " << iteration << " iterations." << endl;
            return;
        }

        // Update the interval
        if (f(a) * fc < 0) {
            b = c;
        } else {
            a = c;
        }

        iteration++;
    }

    cout << "\nRoot approximation after " << maxIterations << " iterations: " << c << endl;
}

int main() {
    double a, b, tolerance;
    int maxIterations;

    // Input values
    cout << "Enter the interval [a, b]: ";
    cin >> a >> b;
    cout << "Enter the tolerance: ";
    cin >> tolerance;
    cout << "Enter the maximum number of iterations: ";
    cin >> maxIterations;

    // Perform the Bisection Method
    bisectionMethod(a, b, tolerance, maxIterations);

    return 0;
}
