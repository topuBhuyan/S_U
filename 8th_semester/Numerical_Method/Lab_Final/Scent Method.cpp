
#include<bits/stdc++.h>
using namespace std;

// Define the function
double f(double x) {
    return x * x - 5*x - 20; // Example: f(x) = x^2 - x - 2
}

void secantMethod(double x0, double x1, double tolerance, int maxIterations) {
    int iteration = 0;
    double x_next;

    // Print table header
    cout << left << setw(10) << "Iteration"
         << setw(15) << "x0"
         << setw(15) << "x1"
         << setw(20) << "f(x0)"
         << setw(20) << "f(x1)"
         << setw(15) << "x_next"
         << setw(15) << "|x_next - x1|" << endl;
    cout << string(100, '-') << endl;

    while (iteration < maxIterations) {
        double f0 = f(x0);
        double f1 = f(x1);

        // Avoid division by zero
        if (fabs(f1 - f0) < 1e-7) {
            cout << "Error: Division by zero. Method fails." << endl;
            return;
        }

        // Calculate the next approximation
        x_next = x1 - f1 * (x1 - x0) / (f1 - f0);

        // Print iteration details
        cout << left << setw(10) << iteration
             << setw(15) << x0
             << setw(15) << x1
             << setw(20) << f0
             << setw(20) << f1
             << setw(15) << x_next
             << setw(15) << fabs(x_next - x1) << endl;

        // Check for convergence
        if (fabs(x_next - x1) < tolerance) {
            cout << "\nRoot found: " << x_next << " after " << iteration + 1 << " iterations." << endl;
            return;
        }

        // Update values for the next iteration
        x0 = x1;
        x1 = x_next;
        iteration++;
    }

    cout << "\nRoot approximation after " << maxIterations << " iterations: " << x_next << endl;
}

int main() {
    double x0, x1, tolerance;
    int maxIterations;

    // Input values
    cout << "Enter the first initial guess (x0): ";
    cin >> x0;
    cout << "Enter the second initial guess (x1): ";
    cin >> x1;
    cout << "Enter the tolerance: ";
    cin >> tolerance;
    cout << "Enter the maximum number of iterations: ";
    cin >> maxIterations;

    // Perform the Secant Method
    secantMethod(x0, x1, tolerance, maxIterations);

    return 0;
}


