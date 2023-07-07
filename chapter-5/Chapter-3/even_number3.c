#include <stdio.h>
int main()
{
	long long int i, n, sum;
    sum = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &n);
		
	for(i = 1; i <= n; i++){ // i = i + 1 // i += 1
        if(i % 2 == 0){
            printf("%lld\n", i);
            sum += i;
            // 2nd time
            // sum = sum + i
            // sum = 0 + 2
            // sum = 2

            // 4th time
            // sum = sum + i
            // sum = 2 + 4
            // sum = 6

            // 6th time
            // sum = sum + i
            // sum = 6 + 6
            // sum = 12

            // 8th time
            // sum = sum + i
            // sum = 12 + 8
            // sum = 20

            // 10th time
            // sum = sum + i
            // sum = 20 + 10
            // sum = 30
        }
    }

    printf("Sum of even numbers from 1 to %lld = %lld\n", n, sum);

    return 0;
}