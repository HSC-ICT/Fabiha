// 2 + 4 + 6 + ... + n
#include<stdio.h>
int main()
{
    int num, sum = 0, i = 2;

    printf("Enter the last number: ");
    scanf("%d", &num);

    while(i <= num){
        sum += i; 
        // sum = 2
        // sum = 2 + 4 = 6
        // sum = 6 + 6 = 12
        // sum = 12 + 8 = 20
        // sum = 20 + 10 = 30
        if(i == 2){
            printf("2"); // 2
        }else{
            printf(" + %d",i); 
            // 4
            // 6
            // 8
            // 10
        }
        i += 2; 
        // i = 4
        // i = 6
        // i = 8
        // i = 10
    }

    printf("\nSum of 2 - %d = %d\n", num, sum);

    return 0;
}