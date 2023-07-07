#include<stdio.h>

int calcSum(double n1, double n2)
{
    // statements
    double sum;
    sum = n1 + n2;
    return sum;
}
int calcSub(double n1, double n2){
    double sub;
    sub = n1 - n2;
    return sub;
}
int calcProduct(double n1, double n2){
    double product = n1 * n2;
    return product;
}
int calcDiv(double n1, double n2){
    return n1 / n2;
}
int calcRem(int num1, int num2)
{
    return num1 % num2;
}

int main()
{
    double n1, n2, sum, sub, product, div;
    int rem;

    printf("Enter two integers number: ");
    scanf("%lf%lf", &n1, &n2);

    sum = calcSum(n1, n2);
    sub = calcSub(n1, n2);
    product = calcProduct(n1, n2);
    div = calcDiv(n1, n2);
    rem = calcRem(n1, n2);


    printf("Sum = %.2lf\n", sum);
    printf("Sub = %.2lf\n", sub);
    printf("Product = %.2lf\n", product);
    printf("Div = %.2lf\n", div);
    printf("Remainder = %d\n", rem);

    return 0;
}