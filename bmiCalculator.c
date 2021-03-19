#include <stdio.h>

int main()
{
    double weight, height, bmi;
    printf("Enter your Weight (in Kg): ");
    scanf("%lf", &weight);
    printf("Enter your height(in cms): ");
    scanf("%lf", &height);
    bmi = weight / ((height * height) / 10000);

    if (bmi <= 18.5)
        printf("You are Underweight.");
    else if (bmi > 18.5 && bmi <= 24.9)
        printf("You are healthy.");
    else if (bmi >= 25.0 && bmi <= 29.9)
        printf("You are Overweight.");
    else
        printf("You are Obese.");
}