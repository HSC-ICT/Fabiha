#include<stdio.h>
main(){
    int a, b;

    a = 5;
    b = 10;

    a += b; // a = a + b;
    printf("a = %d\n", a); // 15

    a -= b; // a = a - b;
    printf("a = %d\n", a); // 5

    a *= b; // a = a * b;
    printf("a = %d\n", a); // 50

    a /= b; // a = a / b;
    printf("a = %d\n", a); // 5

    a %= b; // a = a % b;
    printf("a = %d\n", a); // 5

    return 0;
}
