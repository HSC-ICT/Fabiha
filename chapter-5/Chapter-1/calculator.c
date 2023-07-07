#include<stdio.h>
main(){
    double num1, num2, sum, sub, mul, div;

    printf("Enter two number: ");
    scanf("%lf%lf", &num1, &num2);

    sum = num1 + num2;
    // 5 + 7 = 12
    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, sum);

    sub = num1 - num2;
    // 5 - 7 = -2
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, sub);

    mul = num1 * num2;
    // 5 * 7 = 35
    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, mul);

    div = num1 / num2;
    // 5 / 7 = 0.71
    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, div);

    return 0;
}
