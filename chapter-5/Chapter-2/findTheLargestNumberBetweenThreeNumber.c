#include<stdio.h>
main(){

    int num1, num2, num3;

    printf("Please enter 3 integer number: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if((num1 > num2) && (num1 > num3)){
        printf("%d is the largest number\n", num1);
    }else if((num2 > num1) && (num2 > num3)){
        printf("%d is the largest number\n", num2);
    }else{
        printf("%d is the largest number\n", num3);
    }

    return 0;
}
