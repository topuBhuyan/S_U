#include<bits/stdc++.h>
using namespace std;

// Define the function
double f(double x) {
    return x * x - x - 2; // Example: f(x) = x^2 - x - 2
}

// Regula Falsi Method
void regulaFalsi(double a, double b, double tolerance, int maxIterations) {
    if (f(a) * f(b) >= 0) {
        cout << "Error: f(a) and f(b) must have opposite signs. No root exists in the interval." << endl;
        return;
    }

    double c; // Root approximation
    int iteration = 0;

    cout << left << setw(10) << "Iteration"
         << setw(15) << "a"
         << setw(15) << "b"
         << setw(20) << "c"
         << setw(20) << "f(c)"
         << setw(15) << "|f(c)|" << endl;
    cout << string(90, '-') << endl;

    while (iteration < maxIterations) {
        // Calculate c using the Regular Falsi formula
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));
        double fc = f(c);

        // Print the iteration details
        cout << left << setw(10) << iteration
             << setw(15) << a
             << setw(15) << b
             << setw(20) << c
             << setw(20) << fc
             << setw(15) << fabs(fc) << endl;

        // Check for convergence
        if (fabs(fc) < tolerance) {
            cout << "\nRoot found: " << c << " after " << iteration + 1 << " iterations." << endl;
            return;
        }

        // Update the interval
        if (f(a) * fc < 0) {
            b = c; // Root lies between a and c
        } else {
            a = c; // Root lies between c and b
        }

        iteration++;
    }

    cout << "\nRoot approximation after " << maxIterations << " iterations: " << c << endl;
}

int main() {
    double a, b, tolerance;
    int maxIterations;

    // Input values
    cout << "Enter the first initial guess (a): ";
    cin >> a;
    cout << "Enter the second initial guess (b): ";
    cin >> b;
    cout << "Enter the tolerance: ";
    cin >> tolerance;
    cout << "Enter the maximum number of iterations: ";
    cin >> maxIterations;

    // Perform the Regula Falsi Method
    regulaFalsi(a, b, tolerance, maxIterations);

    return 0;
}


