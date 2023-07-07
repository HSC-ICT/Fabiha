// write a program that print 1^2 + 3^2 + 5^2 + .... + n^2

#include<stdio.h>
int main()
{
    int num, sum = 0, i;

    printf("Enter the last number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i += 2){
        sum += num;
        if(i == 1){
            printf("1^2");
        }else{
            printf(" + %d^2 ",i);
        }
    }
    printf("\nSum of 1^2 - %d^2 = %d\n", num, sum);

    return 0;
}