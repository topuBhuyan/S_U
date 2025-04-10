#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Define the function and its derivative
double f(double x) {
    return x * x - x - 2; // f(x) = x^2 - x - 2
}

double f_prime(double x) {
    return 2 * x - 1; // f'(x) = 2x - 1
}

void newtonRaphsonMethod(double initialGuess, double tolerance, int maxIterations) {
    double x = initialGuess;
    int iteration = 1;

    // Print table header
    cout << left << setw(10) << "Iteration"
         << setw(15) << "x"
         << setw(20) << "f(x)"
         << setw(20) << "f'(x)" << endl;
    cout << string(75, '-') << endl;

    while (iteration <= maxIterations) {
        double fx = f(x);
        double fpx = f_prime(x);

        // Print current iteration details
        cout << left << setw(10) << iteration
             << setw(15) << x
             << setw(20) << fx
             << setw(20) << fpx << endl;

        // Check if the derivative is too small (avoid division by zero)
        if (fabs(fpx) < 1e-7) {
            cout << "Error: Derivative too small. Method fails." << endl;
            return;
        }

        double x_next = x - fx / fpx;

        // Check for convergence
        if (fabs(x_next - x) < tolerance) {
            cout << "\nRoot found: " << x_next << " after " << iteration << " iterations." << endl;
            return;
        }

        x = x_next;
        iteration++;
    }

    cout << "\nRoot approximation after " << maxIterations << " iterations: " << x << endl;
}

int main() {
    double initialGuess, tolerance;
    int maxIterations;

    // Input values
    cout << "Enter the initial guess: ";
    cin >> initialGuess;
    cout << "Enter the tolerance: ";
    cin >> tolerance;
    cout << "Enter the maximum number of iterations: ";
    cin >> maxIterations;

    // Perform the Newton-Raphson Method
    newtonRaphsonMethod(initialGuess, tolerance, maxIterations);

    return 0;
}

