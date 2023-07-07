#include<stdio.h>
main()
{
    char lower, upper;

    printf("Enter any uppercase letter: ");
    scanf("%c", &upper);

    lower = tolower(upper); // argument

    printf("The lowercase letter is: %c\n", lower);


    return 0;
}

