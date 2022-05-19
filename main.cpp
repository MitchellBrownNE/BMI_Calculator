//This small program calculuates the BMI of twins. This program calculates the BMI of each of the twins, and swaps each of their weights and gathers new information after the swap.

#include <iostream>
#include <cmath>

//Conversion function for feet to meters
double conversionMeters(double Height)
{
    Height = Height / 3.281;
   return (Height);
}

//BMI calculator for defaulted height at 1.8 m.
double BMIcalculator(double Weight1)
{
    double Height = 1.8;
    double HeightSquared = pow(Height,2);
    double BMI = (Weight1 / HeightSquared);
    return (BMI);
}

//BMI calculator for user input height and weight
double BMIcalculator(double Weight2, double Height)
{
    double HeightSquared = pow(Height,2);
    double BMI = Weight2 / HeightSquared;
    return (BMI);
}

//Swapping function with pointers
void swap(int *Weight1, int *Weight2)
{
    int temp = *Weight1;
    *Weight1 = *Weight2;
    *Weight2 = temp;
}

//Main function
int main() 
{
    //Variables
    int W1, W2;
    double H;

    //Greeting prompt
    std::cout << "Hello, Welcome to the BMI calculator\n\n";

    
    std::cout << "Please input weight in kilograms of first twin(Height will be set to 1.8m): ";
    std::cin >> W1;
    
    std::cout << "Please input weight of second twin: ";
    std::cin >> W2;
    std::cout << "Please input height of second twin in feet:";
    std::cin >> H;

    //Calling BMIcalculator function and outputting its values
    float BMI_Index1 = BMIcalculator(W1);
    float BMI_Index2 = BMIcalculator(W2, conversionMeters(H));
    std::cout << "\nBMI before swapping weights\n";
    std::cout << "\nFirst BMI values of first twin: " << BMI_Index1 << "\nFirst BMI values for second twin: " << BMI_Index2 << std::endl;

    //Swapping weights
    swap(&W1, &W2);

    BMI_Index1 = BMIcalculator(W1);
    BMI_Index2 = BMIcalculator(W2, conversionMeters(H));
    std::cout << "\nBMI after swapping weights\n";
    std::cout << "\nSecond BMI values of first twin: " << BMI_Index1 << "\nSecond BMI values for second twin: " << BMI_Index2 << std::endl;

    return 0;
}

