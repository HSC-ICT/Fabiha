#include<stdio.h>

int calcSum(double n1, double n2);

int main()
{
    int a, b, sum;

    printf("Enter two integers number: ");
    scanf("%d%d", &a, &b);

    sum = calcSum(a, b);

    printf("Sum = %d\n", sum);

    return 0;
}

int calcSum(double n1, double n2)
{
    double sum;
    sum = n1 + n2;
    return sum;
}