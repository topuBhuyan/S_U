#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

double fun(double x) {
    return x * x - x - 2;
}

void regularFalsi(double a, double b, double tolerance, int maxIteration) {
    if(fun(a) * fun(b) >= 0) {
        cout <<"Error: f(a) and f(b) must have opposite signs. " <<endl;
        return;
    }
    double c;
    int iteration = 0;

    cout <<left <<setw(10) <<"Iteration" <<setw(15) <<"a" <<setw(15) <<"b" <<setw(20) <<"c" <<setw(20) <<"f(c)" <<setw(15) <<"|f(c)|" <<endl;
    cout << string(90, '-') <<endl;

    while(iteration <  maxIteration) {
        c = (a * fun(b) - b * fun(a) / fun(b) - fun(a));
        double fc = fun(c);

        cout <<left <<setw(10) <<iteration <<setw(15) <<a <<setw(15) << b <<setw(20) <<c <<setw(20) <<fc <<setw(15) << fabs(fc) <<endl;

    // check for convergence
    if(fabs(fc) < tolerance) {
        cout <<"\nRoot found: " <<c <<" after " <<iteration + 1 <<" iteration. " <<endl;
        return;
    }
    if(fun(a) * fc < 0) {
        b = c;
    } else {
        a = c;
    }
        iteration++;
    }
    cout <<"\nRoot approximation after " <<maxIteration <<" iteration" <<c <<endl;
}

int main(){
    double a, b, tolerance;
    int maxIterations;

    cout <<"Enter the first initial guess (a): "; cin >> a;
    cout <<"Enter the second initial guess (b): "; cin >> b;
    cout <<"Enter the tolerance: "; cin >> tolerance;
    cout <<"Enter the maximum number of iterations: "; cin >> maxIterations;

    regularFalsi(a, b, tolerance, maxIterations);


    return 0;
}

