#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

double fun(double x) {
    return x * x - 5*x - 20; // f(x) = x^2 - x - 2
}

void secantMethod(double x0, double x1, double tolerance, int maxIterations) {
    int iteration = 0;

    double next;

    cout << left <<setw(10) <<"Iteration"
        <<setw(15) <<"x0" <<setw(15) <<"x1" <<setw(20) <<"f(x0)" <<setw(20) <<"f(x1)" <<setw(15) <<"Next"
        <<setw(15) <<"| next - x1 |" <<'\n';
    cout <<string(100,'-') <<endl;

    while(iteration < maxIterations) {
        double fun0 = fun(x0);
        double fun1 = fun(x1);

        // Avoid division by zero
        if(fabs(fun1 - fun0) < 1e-7) {
            cout <<"Error division by zero method fails." <<'\n';
            return;
        }
        // calculate the next approximation
        next = x1 - fun1 * (x1 - x0) / (fun1 -fun0);

        // print iteration details
        cout << left <<setw(10) << iteration << setw(15) << x0 << setw(15) << x1 << setw(20) << fun0 << setw(20) << fun1 << setw(15) << next << setw(15) << fabs(next - x1) <<'\n';

        // check for convergence
        if(fabs(next - x1) < tolerance) {
            cout <<"\nRoot found: " << next << " after " << iteration + 1 <<"iteration" <<endl;
            return;
        }
        // update values for the next iteration
        x0 = x1;
        x1 = next;
        iteration++;
    }
    cout <<"\nRoot approximation after " <<maxIterations <<" Iteration: " <<next <<endl;
}

int main(){
    double x0, x1, tolerance;
    int maxIterations;

    cout <<"Enter the first initial guess (x0): "; cin >> x0;
    cout <<"Enter the second initial guess (x1): "; cin >>x1;
    cout <<"Enter the tolerance: "; cin >> tolerance;
    cout <<"Enter the maximum number of inerations: "; cin >> maxIterations;

    // perform the secant method
    secantMethod(x0, x1, tolerance, maxIterations);


    return 0;
}

