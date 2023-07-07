// calculate power 
// example: 2^5
#include <stdio.h>
#include <math.h>
int main()
{
	int base, exponent, result;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    result = pow(base, exponent); //argument

    printf("%d^%d = %d",base, exponent, result);

    return 0;

}
