#include <stdio.h>
int main(){
    // variable declaration
    double cel, fah;

    // print & scan part
    printf("Please enter celcius value :  ");
    scanf("%lf", &cel);

    // calculation part
    fah = ((9 * cel) / 5) + 32;
    // fah = (cel * 1.8) + 32;

    // output part
    printf("Fahrenheit Value is :  %.2lf \n", fah);

    return 0;
}
