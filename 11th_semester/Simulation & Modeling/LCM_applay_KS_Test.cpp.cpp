// Problem Link: 
// LCM with Kolmogorov-Smirnov Test

#include <bits/stdc++.h>
using namespace std;

// Returns Random Number as Integer (LCM)
int nextRandomInt(int x, int a, int c, int m)
{
    int xi = (a * x + c) % m;
    return xi;
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, a, c, x, m;
    float Dalpha;

    cout << "Enter seed value (x0): "; cin >> x;
    cout << "Enter multiplier (a): ";
    cin >> a;
    cout << "Enter increment (c): ";
    cin >> c;
    cout << "Enter modulus (m): ";
    cin >> m;
    cout << "How many random numbers to generate? ";
    cin >> n;

    // Arrays for storing values (like K_S_Test.cpp)
    float randomNumbers[1000];
    float ratio[1000], ratiominus[1000];
    float Dplus[1000], Dminus[1000];
    float DplusMax, DminusMax;
    float D;
    int i, j;

    // Generate random numbers using LCM
    cout << "\nGenerated random numbers (U(0,1)):\n";
    for(i = 0; i < n; i++) {
        x = nextRandomInt(x, a, c, m);
        randomNumbers[i] = (float)x / (float)m;
        cout << "Number " << (i+1) << ": " << fixed << setprecision(4) << randomNumbers[i] << endl;
    }

    // Sort the numbers in ascending order (like K_S_Test.cpp)
    sort(randomNumbers, randomNumbers + n);

    // Calculate ratios and D+ and D- (like K_S_Test.cpp)
    for(i = 0; i < n; i++) {
        j = i + 1;
        ratio[i] = (float) j / n;
        ratiominus[i] = (float) i / n;
        Dplus[i] = ratio[i] - randomNumbers[i];
        Dminus[i] = randomNumbers[i] - ratiominus[i];
    }
    cout << '\n\n';

    // Print headers (like K_S_Test.cpp)
    cout << setw(10) << "i";
    for(i = 1; i <= n; i++) {
        cout << setw(10) << i;
    }
    cout << endl;

    // Print R(i) - Sorted random numbers
    cout << setw(10) << "R(i)";
    for(i = 0; i < n; i++) {
        cout << setw(10) << fixed << setprecision(4) << randomNumbers[i];
    }
    cout << endl;

    // Print i/n ratio
    cout << setw(10) << "i/n";
    for(i = 0; i < n; i++) {
        cout << setw(10) << fixed << setprecision(4) << ratio[i];
    }
    cout << endl;

    // Print D+
    cout << setw(10) << "D+";
    for(i = 0; i < n; i++) {
        cout << setw(10) << fixed << setprecision(4) << Dplus[i];
    }
    cout << endl;

    // Print D-
    cout << setw(10) << "D-";
    for(i = 0; i < n; i++) {
        cout << setw(10) << fixed << setprecision(4) << Dminus[i];
    }
    cout << endl;

    // Find D+ max and D- max (like K_S_Test.cpp)
    DplusMax = Dplus[0];
    DminusMax = Dminus[0];

    for(i = 1; i < n; i++) {
        if(Dplus[i] > DplusMax) {
            DplusMax = Dplus[i];
        }
        if(Dminus[i] > DminusMax) {
            DminusMax = Dminus[i];
        }
    }

    cout << "\nD+ max: " << fixed << setprecision(4) << DplusMax << endl;
    cout << "D- max: " << fixed << setprecision(4) << DminusMax << endl;

    D = max(DplusMax, DminusMax);
    cout << "D = max(" << DplusMax << ", " << DminusMax << ") = " << D << endl;

    cout << "\nEnter the tabulated value (D Alpha): ";
    cin >> Dalpha;

    if(D < Dalpha) {
        cout << "\nThe test is accepted." << endl;
        cout << "Conclusion: The random numbers follow Uniform(0,1) distribution." << endl;
    } else {
        cout << "\nThe test is rejected." << endl;
        cout << "Conclusion: The random numbers do NOT follow Uniform(0,1) distribution." << endl;
    }

    return 0;
}