#include <iostream>
#include <cmath>

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

int main() {
    double w1, w2, h;
    std::cin >> w1 >> w2 >> h;

    float index1 = BMIcalculator(w1);
    float index2 = BMIcalculator(w2, conversionMeters(h));

    std::cout << index1 << " " << index2 << std::endl;

    swap(w1, w2);

    index1 = BMIcalculator(w1);
    index2 = BMIcalculator(w2, conversionMeters(h));
    std::cout << index1 << " " << index2 << std::endl;
}

