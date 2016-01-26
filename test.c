#include <stdio.h>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{


double x    = 193.0  / 8192;
double y    = 65.0 / 8192;
double z    = 8193.0 / 8192;
double d_pi = 180.0 / M_PI;
double ax = -atan2(y, sqrt((x * x) + (z * z))) * d_pi;
double ay =  atan2(-x, (z < 0 ? -1 : 1) * sqrt((y * y) + (z * z))) * d_pi;
double az = 0;

cout << ax;
cout << "\n";
cout << ay;
cout << "\n";
cout << az;
cout << "\n";



return 0;
}
