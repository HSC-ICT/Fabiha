#include<stdio.h>
main(){
    int a, b, c, d;

    a = 5;
    b = 10;
    c = 3;
    d = 7;
    // a++, a = a + 1

    // increment example ==> a++, ++a,
    // a++ ==> shathe shathe 1 bare na
    // ++a ==> shathe shathe 1 bare

    // decrement example ==> b--, --b
    // b-- ==> shathe shathe 1 kombe na
    // --b ==> shathe shathe 1 kombe

    printf("a++ = %d\n", a++); // 5
    printf("a++ = %d\n", a++); // 6

    printf("++c = %d\n", ++c); // 4
    printf("++c = %d\n", ++c); // 5

    printf("b-- = %d\n", b--); // 10
    printf("b-- = %d\n", b--); // 9

    printf("--d = %d\n", --d); // 6
    printf("--d = %d\n", --d); // 5


    return 0;
}
