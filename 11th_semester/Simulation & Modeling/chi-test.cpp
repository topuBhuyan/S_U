#include<bits/stdc++.h>
using namespace std;

int main() {
    // Given values
    const long long m = (1LL << 31); // 2^31
    const long long a = 1103515245;
    const long long c = 12345;

    long long X;

    cout << "Enter seed (last 4 digits of phone number): ";
    cin >> X;

    vector<double> randomNumbers;

    // Step 1: Generate 40 random numbers using LCM
    cout << "\nGenerated Random Numbers:\n";
    for (int i = 0; i < 40; i++) {
        X = (a * X + c) % m;
        double U = (double)X / m;
        randomNumbers.push_back(U);

        cout << "U[" << i + 1 << "] = " << U << endl;
    }

    // Step 2: Chi-Square Test
    int freq[10] = {0};

    // Count frequencies in 10 intervals
    for (double num : randomNumbers) {
        int index = num * 10;
        if (index == 10) index = 9;
        freq[index]++;
    }

    double expected = 40.0 / 10; // = 4
    double chiSquare = 0.0;

    cout << "\nInterval Frequencies:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Interval [" << i/10.0 << " - " << (i+1)/10.0 << "): ";
        cout << freq[i] << endl;

        chiSquare += pow(freq[i] - expected, 2) / expected;
    }

    cout << "\nChi-Square Value = " << chiSquare << endl;

    double critical = 13.277;

    if (chiSquare < critical)
        cout << "Result: Accept Null Hypothesis (Uniform Distribution)\n";
    else
        cout << "Result: Reject Null Hypothesis\n";

    return 0;
}
