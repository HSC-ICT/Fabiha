#include <stdio.h>
int main()
{
	int i, n, sum;
    sum = 0;

    printf("Enter an integer number: ");
    scanf("%d", &n);
		
	for(i = 1; i <= n; i++){
        if(i % 2 != 0){
            printf("%d\n", i);
            sum += i;
        }
    }

    printf("Sum of odd numbers from 1 to %d = %d\n", n, sum);

    return 0;
}