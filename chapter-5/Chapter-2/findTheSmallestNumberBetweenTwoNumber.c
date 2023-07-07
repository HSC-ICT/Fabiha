#include<stdio.h>
main(){

    // if-else statement

    // if(condition){
        // statement part
    // }else{
        // statement
    // }

    int num1, num2;

    printf("Enter two integer number: ");
    scanf("%d%d", &num1, &num2);

    if(num1 < num2){
        printf("%d is the smallest number.\n", num1);
    }else{
        printf("%d is the smallest number.\n", num2);
    }

    return 0;
}

