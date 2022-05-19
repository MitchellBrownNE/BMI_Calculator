/*==========================================================

 Title:   Lab 7 - C++ Care Unit
 Course:  	CSC 1100
 Author:  	<First & Last Name>
 Date:    	< / / >
 Description: This program ....

 ==========================================================
*/

#include <iostream>
#include <cmath>
using namespace std;

// Write functions here

double conversionMeters(double h)
{
   h = h / 3.281;
   return (h);
}

double BMIcalculator(double w1)
{
    double h = 1.8;
    double hSquared = pow(h,2);
    double BMI = (w1 / hSquared);
    return (BMI);
}

double BMIcalculator(double w2, double h)
{
    double hSquared = pow(h,2);
    double BMI = w2 / hSquared;
    return (BMI);
}

int swap(int w1, int w2)
{
    int temp;
    temp = w1;
    w1 = w2;
    w2 = temp;
    return 0;
}

// You can't edit the main file - we froze it anyway :) 
// So all you need to do is define the four functions listed
int main() {
    double w1, w2, h;
    cin >> w1 >> w2 >> h;

    float index1 = BMIcalculator(w1);
    float index2 = BMIcalculator(w2, conversionMeters(h));

    cout << index1 << " " << index2 << endl;

    swap(w1, w2);

    index1 = BMIcalculator(w1);
    index2 = BMIcalculator(w2, conversionMeters(h));
    cout << index1 << " " << index2 << endl;
}

