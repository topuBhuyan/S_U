#include<bits/stdc++.h>
using namespace std;

double question_equation_decleration(double x){
    x * x * x - x - x - 2;
}

void Bisection_method(double a, double b, double tolarance, int max_iteration){
    if(question_equation_decleration(a) * question_equation_decleration(b) >= 0) {
        cout << "Condition wrong\n";
        return;
    }
    double c; //Mid point
    int iteration = 1;

cout << left <<setw(10) << "Iteration" << setw(15) <<"a" <<setw(15) <<"b" <<setw(15) <<"c" <<setw(20) <<"f(c)" <<'\n';
cout << string(75, '-') <<'\n';

while(iteration <= max_iteration) {
    c = (a + b) / 2.0; // calculate the mid point

    double fc = question_equation_decleration(c);

    cout << left <<setw(10) <<iteration << setw(15) << a <<setw(15) << b <<setw(15) << c <<setw(20) <<fc <<'\n';

    // Check if the root is found or if the tolerance is met
    if(fabs(fc) < tolarance || fabs(b-a) < tolarance) {
        cout << "\nRoot found: " <<c <<" after " <<iteration <<" iteration \n";
        return;
    }

    // update the interval
    if(question_equation_decleration(a) * fc < 0) {
        b = c;
    }else {
        a = c;
    }
    iteration++;
 }
    cout << "\nRoot approximation after " << max_iteration <<" iteration" << c <<'\n';
}

int main(){
    double a, b, tolarance;
    int max_iteration;

    cout << "Enter the interval value [a, b]: "; cin >> a >> b;
    cout << "Enter the tolerations"; cin >> tolarance;
    cout << "Enter the maximum number of iterations: "; cin >> max_iteration;

    return 0;
}

