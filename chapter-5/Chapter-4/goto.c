#include<stdio.h>
int main()
{
    int i = 1;

    call:
        printf("%d\t", i);
        i++;

    if(i <= 10){
        // goto statement
        goto call;
    }

    printf("\n");

    return 0;
}