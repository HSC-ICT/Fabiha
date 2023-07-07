// Write a program that calculates Square Root

#include<stdio.h>

#include<math.h>

int main()

{

    double value, result;// must be double because sqrt return double data type

    printf("Enter Decimal Number : ");

    scanf("%lf", &value);

    result = sqrt(value);

    printf("Square Root is = %.2lf", result);

    return 0;

}
