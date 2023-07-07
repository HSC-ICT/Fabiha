#include<stdio.h>
main()
{
    char lower;

    printf("Enter any lowercase letter: ");
    scanf("%c", &lower);

    // a = 97
    // A = 65

    printf("The uppercase letter is: %c\n", lower - 32);

    return 0;
}
