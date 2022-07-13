//
//  Quadratic equation - Program to calculate a value of a quadratic equation
//
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
// Enter the parameters of quadratic equation
int A1;
    cout << "Enter the value of A:";
    cin >> A1;
int A2;
    cout << "Enter the value of B:";
    cin >> A2;
int A3;
    cout << "Enter the value of C:";
    cin >> A3;
// Echo what the operator entered
    cout << A1 << ""
        << "x^2" << " + "
        << "("<< ""
        << A2 << ""
        << ")"<< ""
        << "x" << " + "
        << "("<< ""
        << A3 << ""
        << ") = y " << endl;
// Calculate the value of equation
int X1;
int Y1;
    cout << "Enter the value of x:";
    cin >> X1;
    Y1 = A1*pow(X1,2)+A2*X1+A3;
// output the result
    cout << "The equation's value is: y = ";
    cout << Y1 << endl;
// wait until user is ready before terminating program
// in order to allow the user to see the result
system ("Pause");
return 0;
}
