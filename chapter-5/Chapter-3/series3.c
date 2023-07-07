// 2 + 4 + 6 + ... + n
#include<stdio.h>
int main()
{
    int num, sum = 0, i;

    printf("Enter the last number: ");
    scanf("%d", &num);

    for(i = 2; i <= num; i += 2){
        if(i == 2){
            printf("2");
        }else{
            printf(" + %d",i);
        }
        sum += i;
    }
    printf("\nSum of 2 - %d = %d\n", num, sum);

    return 0;
}