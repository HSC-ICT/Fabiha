// area of triangle

#include<stdio.h>
int main(){

    double radius , area;
    const double PI = 3.1416;

    printf("Enter Radius: ");
    scanf("%lf", &radius);

    radius = radius * radius;

    // area = 3.1416 * radius * radius;
    area = PI * radius * radius;
    // area = PI * radius;

    printf("Area of Circle = %.2lf\n",area);

    return 0;
}

