#include<stdio.h>
int main(){

    double cm, inch;

    printf("Enter cm: ");
    scanf("%lf", &cm);

    inch = cm / 2.54;

    printf("%.2lf cm = %.2lf inch\n", cm, inch );

    return 0;
}

