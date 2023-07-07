#include<stdio.h>
int main(){
    // variable declaration
    double cel, fah;

    // print & scan part
    printf("Please enter fahrenheit value :  ");
    scanf("%lf", &fah);

    // calculation part
    cel = ((fah - 32) * 5) / 9;

    // output part
    printf("Celcius Value is :  %.2lf \n", cel);

    return 0;
}
