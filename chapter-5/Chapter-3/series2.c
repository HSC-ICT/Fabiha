// 1 + 3 + 5 + 7 + 9 + ... + n
#include<stdio.h>
int main()
{
    int num, sum = 0, i;

    printf("Enter the last number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i += 2){
        sum += num;
        if(i == 1){
            printf("1");
        }else{
            printf(" + %d ",i);
        }
    }
    printf("\nSum of 1 - %d = %d\n", num, sum);

    return 0;
}