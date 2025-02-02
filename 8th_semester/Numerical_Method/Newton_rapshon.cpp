#include<bits/stdc++.h>
using namespace std;

double fun_name(double x) {

    return x * x * x - 2;
}

double fun_differentiation(double x) {

    return 2 * x - 1;
}

void method_function(double initial_guess, double tolerance, int max_iterations) {
    double x = initial_guess; int iteration = 1;

    //table plrint
    cout << left << setw(10) <<"Iteration" << setw(15) <<"X"
                 << setw(20) <<"f(x)" <<setw(20) << "f'(x) \n";
    cout << string(75, '-') <<'\n';

    while(iteration <= max_iterations) {
        double fx = fun_name(x);
        double fpx = fun_differentiation(x);

        // printing current iteration details
        cout << left <<setw(10) << iteration << setw(15) <<x << setw(20) << fx << setw(20) <<fpx <<'\n';

        if(fabs(fpx) < 1e-7) {
            cout <<"Error: derivative to small method fails \n";
            return;
        }
        double x_next = x - fx / fpx;

        if(fabs(x_next - x) < tolerance) {
            cout << "\n Root found: " <<x_next <<" after " <<iteration <<" iterations\n";
            return;
        }
        x = x_next;
        iteration++;
    }
    cout <<"\n Root approximation after " <<max_iterations <<" iterations: " << x <<'\n';
}

int main(){

       double initial_guess, tolerance; int max_iterations;

       cout <<"Enter the initial guess: "; cin >> initial_guess;
       cout <<"Enter the tolerance: "; cin >> tolerance;
       cout <<"Enter the maximum number of iteration: "; cin >> max_iterations;

      method_function(initial_guess, tolerance, max_iterations);

    return 0;
}

