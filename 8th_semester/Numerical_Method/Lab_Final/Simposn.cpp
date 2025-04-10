#include<iostream>
#include<math.h>
#include<iomanip> // For setting precision and formatting

/* Define function here */
#define f(x) 1/(1+pow(x,2))

using namespace std;

int main()
{
    float lower, upper, integration=0.0, stepSize, x;
    int i, subInterval;

    /* Input */
    cout << "Enter lower limit of integration: ";
    cin >> lower;
    cout << "Enter upper limit of integration: ";
    cin >> upper;
    cout << "Enter number of sub intervals (Must be even): ";
    cin >> subInterval;

    /* Check if subInterval is even */
    if(subInterval % 2 != 0)
    {
        cout << "Error: Number of sub intervals must be even!" << endl;
        return 1;
    }

    /* Calculation */
    stepSize = (upper - lower) / subInterval;

    /* Displaying Step Size */
    cout << "\nStep Size (h): " << stepSize << endl;

    /* Displaying Table Header */
    cout << "\n-------------------------------------------------------------------------\n";
    cout << "|    i   |     x     |      f(x)     |  Coefficient  | Contribution to I |\n";
    cout << "-------------------------------------------------------------------------\n";

    /* Calculating Integration */
    integration = f(lower) + f(upper);
    cout << "|    0   | " << setw(8) << lower << " | " << setw(12) << f(lower)
         << " |      1         | " << setw(15) << f(lower) << " |\n";

    for(i = 1; i <= subInterval - 1; i++)
    {
        x = lower + i * stepSize;
        int coefficient = (i % 2 == 0) ? 2 : 4;

        cout << "| " << setw(5) << i << "   | " << setw(8) << x << " | "
             << setw(12) << f(x) << " | " << setw(11) << coefficient
             << "       | " << setw(15) << coefficient * f(x) << " |\n";

        integration += coefficient * f(x);
    }

    cout << "|    " << subInterval << "   | " << setw(8) << upper << " | "
         << setw(12) << f(upper) << " |      1         | " << setw(15) << f(upper) << " |\n";
    cout << "-------------------------------------------------------------------------\n";

    /* Final Calculation */
    integration = integration * stepSize / 3;

    /* Displaying Final Result */
    cout << fixed << setprecision(6);
    cout << "\nRequired value of integration is: " << integration << endl;

    return 0;
}


