#include <stdio.h>
int main()
{
	int count, limit, sum;
    sum = 0;

    printf("Enter an integer number: ");
    scanf("%d", &limit);
		
	for(count = 1; count <= limit; count++){
        if(count % 2 != 0){
            printf("%d\n", count);
            sum += count;
        }
    }

    printf("Sum of odd numbers from 1 to %d = %d\n", limit, sum);

    return 0;
}