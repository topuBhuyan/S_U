#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    // Given constants
    const long long m = (1LL << 31);   // 2^31
    const long long a = 1103515245;
    const long long c = 12345;

    long long X;

    // Input seed
    cout << "Enter seed (last 4 digits of phone number): ";
    cin >> X;

    vector<double> U;

    //  Problem 1: Generate 40 random numbers usin LCM 
    cout << "\nGenerated Random Numbers:\n";
    for (int i = 0; i < 40; i++) {
        X = (a * X + c) % m;
        double randomNum = (double)X / m;
        U.push_back(randomNum);

        cout << randomNum << endl;
    }

    // ===== Problem 2: KS Test =====

    // Sort the random numbers
    sort(U.begin(), U.end());

    int n = U.size();
    double D_plus = 0.0, D_minus = 0.0;

    for (int i = 0; i < n; i++) {
        double Dp = ((i + 1) / (double)n) - U[i];
        double Dm = U[i] - (i / (double)n);

        if (Dp > D_plus) D_plus = Dp;
        if (Dm > D_minus) D_minus = Dm;
    }

    double D = max(D_plus, D_minus);
    double D_critical = 1.36 / sqrt(n);

    // Output results
    cout << "\n--- KS Test Result ---\n";
    cout << "D+ = " << D_plus << endl;
    cout << "D- = " << D_minus << endl;
    cout << "D  = " << D << endl;
    cout << "Critical Value = " << D_critical << endl;

    if (D < D_critical)
        cout << "Result: Accept H0 (Uniform Distribution)\n";
    else
        cout << "Result: Reject H0 (Not Uniform)\n";

    return 0;
}
