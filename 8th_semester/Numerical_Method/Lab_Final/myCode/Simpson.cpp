#include<bits/stdc++.h>
#define endl "\n"

#define fun(x) 1/(1+pow(x,2))

using namespace std;


int main(){
    float lower, upper, integration = 0.0, stepSize, x;
    int i, subInterval;

    cout <<"Enter lower number: "; cin >> lower;
    cout <<"Enter upper number: "; cin >> upper;
    cout <<"Enter interVal even number: "; cin >> subInterval;

    // check if subInterval

    if(subInterval % 2 != 0) {
        cout <<"invalid number please enter even number";
        return 1;
    }

    // Calculation
    stepSize = (upper - lower) / subInterval;

    //Displaying Step Size
    cout <<"\n step size (h): " <<stepSize <<'\n';

    //Displaying Table Header
    cout <<"\n-------------------------------------------------------------------" <<'\n';
    cout <<"|   i | x   |   f(x)    |   Coefficient     |   Contribution to I |\n" <<'\n';
    cout <<"---------------------------------------------------------------------" <<'\n';

    //Calculating Integration
    integration = fun(lower) + fun(upper);
    cout <<"|   0   |" <<setw(8) <<lower <<" | " <<setw(12) <<fun(lower) <<" |  1   | " <<setw(15) <<fun(lower) <<" | \n";

    for(i = 1; i <= subInterval - 1; i++) {

        x = lower + i* stepSize;
        int coefficient = (i % 2 == 0) ? 2 : 4;

        cout << "| " << setw(5) << i << "   | " << setw(8) << x << " | "
      << setw(12) << fun(x) << " | " << setw(11) << coefficient
      << "       | " << setw(15) << coefficient * fun(x) << " |\n";

                integration += coefficient * fun(x);
    }

    cout << "|    " << subInterval << "   | " << setw(8) << upper << " | " << setw(12) << fun(upper) << " |   1     | " << setw(15) << fun(upper) << " |\n";
    cout << "-------------------------------------------------------------------------\n";

    //Final Calculation

    integration = integration * stepSize / 3;

    //Final Calculation

    cout <<fixed << setprecision(6);
    cout <<"\n Required value integration is: " <<integration <<'\n';

    return 0;
}

