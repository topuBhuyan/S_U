#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

double myFunction(double x) {
    return 1 / (1 + pow(x,2)); //  এটি ফাংশন  𝑓(𝑥)= 1/1+𝑥^2 সংজ্ঞায়িত করেছে।
}

int main(){

    double lower, upper, integration = 0.0, stepSize, k;
    int i, subInterval;

    cout <<"Enter lower number: "; cin >> lower;
    cout <<"Enter upper number: "; cin >> upper;
    cout <<"Enter subInterval number: "; cin >> subInterval;

    stepSize = (upper - lower) / subInterval;  // প্রতিটি সাবইন্টারভালের দৈর্ঘ্য হিসাব করছে।

    integration = myFunction(lower) + myFunction(upper); //প্রথম এবং শেষ পয়েন্টের ফাংশনের মান যোগ করছে।

    for(i = 1; i <= subInterval - 1; i++) {
        k = lower + i * stepSize;               //মধ্যবর্তী প্রতিটি পয়েন্টের ফাংশনের মান দ্বিগুণ করে যোগ করছে।
        integration += 2 * myFunction(k);
    }

    integration = integration * stepSize / 2; //  Trapezoidal Rule এর মূল সূত্র প্রয়োগ করছে।

    cout << endl <<"Required value integration: " <<integration <<'\n'; //চূড়ান্ত ইন্টিগ্রালের মান দেখাচ্ছে।

    return 0;
}
