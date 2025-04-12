#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

double fun(double x) {
    return x * x - x - 2;
}

double funPrime(double x) {
    return 2 * x -1;
}

void newtonRaphon(double initialGuess, double tolerance, int maxInteratin) {
    double x = initialGuess;
    int iteration = 1;

    cout <<left <<setw(10) <<"Iteration" <<setw(15) <<"x" <<setw(20) <<"f(x)" <<setw <<"f'(x)" <<endl;
    cout << string(75, '-') <<endl;

    while(iteration <= maxInteratin) {
        double funx = fun(x);
        double funpx = funPrime(x);

     cout <<left <<setw(10) << iteration <<setw(15) << x <<setw(20) <<funx <<setw(20) <<funpx <<endl;

     if (fabs(funpx) < 1e-7) {
        cout <<"Error: Derivative to smll. method fails. " <<endl;
        return;
     }
     double next = x - funx / funpx;

     if(fabs(next - x) < tolerance) {
        cout <<"\n Root found: " <<next <<" after " <<iteration <<"iteration." <<endl;
        return;
     }

     x = next;
     iteration++;
    }
    cout <<"\nRoot approximation after " <<maxInteratin <<"iteration: " <<x <<endl;
}

int main(){
    double initialGuess, tolerance;
    int maxIterations;

    cout <<"Enter the initial guess: "; cin >> initialGuess;
    cout <<"Enter the tolerance: " ; cin >> tolerance;
    cout <<"Enter the maximum number of iterations: "; cin >> maxIterations;

    // perform the newton raphons method

    newtonRaphon(initialGuess, tolerance, maxIterations);

    return 0;
}

