//
// Created by National Cyber City on 11/29/2022.
//

// Inline function that calculates the volume of a sphere.
#include <iostream>
#include <cmath>
#include <sysinfoapi.h>
using namespace std;

const double PI = 3.14159; // define global constant PI

// calculates volume of a sphere
double sphereVolume(const double radius)
{
    return 4.0 / 3.0 * PI * pow(radius, 3);
} // end inline function sphereVolume

int main()
{
    // Start measuring time
    long long int begin = GetTickCount64();
    double radiusValue;
    // prompt user for radius
    cout << "Enter the length of the radius of your sphere: ";
    cin >> radiusValue; // input radius

    // use radiusValue to calculate volume of sphere and display result
    cout << "Volume of sphere with radius " << radiusValue << " is " << sphereVolume(radiusValue) << endl;
    // Stop measuring time and calculate the elapsed time
    // Stop measuring time and calculate the elapsed time
    long long int end = GetTickCount64();
    double elapsed = (end - begin) * 1e-3;
    cout << elapsed;
} // end main