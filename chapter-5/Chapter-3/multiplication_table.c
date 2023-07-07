#include<stdio.h>
int main()
{
    int num, count, result;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    for(count = 1; count <= 10; count++) {
        result = num * count;
        printf("%d X %d = %d\n",num, count, result);
    }

    return 0;
}