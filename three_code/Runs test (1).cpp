#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {

    // -----------------------------
    // GIVEN VALUES (LCG)
    // -----------------------------
    long long m = pow(2, 31);
    long long a = 1103515245;
    long long c = 12345;

    long long X0;
    cout << "Enter seed (last 4 digits of phone number): ";
    cin >> X0;

    long long Xi = X0;

    vector<double> R;

    // -----------------------------
    // PROBLEM 1: Generate 40 random numbers
    // -----------------------------
    cout << "\nGenerated Random Numbers:\n";

    for (int i = 0; i < 40; i++) {
        Xi = (a * Xi + c) % m;
        double Ri = (double)Xi / m;
        R.push_back(Ri);

        cout << "R[" << i+1 << "] = " << Ri << endl;
    }

    // -----------------------------
    // PROBLEM 2: Runs Test
    // -----------------------------

    // Convert into 0 and 1 (based on 0.5)
    vector<int> seq;
    for (int i = 0; i < 40; i++) {
        if (R[i] >= 0.5)
            seq.push_back(1);
        else
            seq.push_back(0);
    }

    // Count runs
    int runs = 1;
    for (int i = 1; i < 40; i++) {
        if (seq[i] != seq[i - 1]) {
            runs++;
        }
    }

    // Count n1 and n2
    int n1 = 0, n2 = 0;
    for (int i = 0; i < 40; i++) {
        if (seq[i] == 1)
            n1++;
        else
            n2++;
    }

    // Expected mean of runs
    double mean = ((2.0 * n1 * n2) / (n1 + n2)) + 1;

    // Variance
    double variance = (2.0 * n1 * n2 * (2.0 * n1 * n2 - n1 - n2)) /
                      ((pow(n1 + n2, 2)) * (n1 + n2 - 1));

    double std_dev = sqrt(variance);

    // Z-score
    double Z = (runs - mean) / std_dev;

    // -----------------------------
    // OUTPUT RESULTS
    // -----------------------------
    cout << "\n--- Runs Test Result ---\n";
    cout << "n1 (>=0.5): " << n1 << endl;
    cout << "n2 (<0.5): " << n2 << endl;
    cout << "Total Runs: " << runs << endl;
    cout << "Expected Runs: " << mean << endl;
    cout << "Z value: " << Z << endl;

    // Decision (alpha = 0.05)
    if (abs(Z) <= 1.96) {
        cout << "Conclusion: Accept H0 (Random Sequence)\n";
    } else {
        cout << "Conclusion: Reject H0 (Not Random)\n";
    }

    return 0;
}
