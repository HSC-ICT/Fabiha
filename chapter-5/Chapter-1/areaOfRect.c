#include<stdio.h>
#include<math.h>
int main(){

    double length, width , area;

    printf("Enter length and width values: ");
    scanf("%lf%lf", &length, &width);

    area = length * width;

    printf("Area of Rectangle = %.2lf\n",area);

    return 0;
}
