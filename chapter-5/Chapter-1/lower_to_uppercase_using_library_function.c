#include<stdio.h>
main()
{
    char lower, upper;

    printf("Enter any lowercase letter: ");
    scanf("%c", &lower);

    upper = toupper(lower); // argument

    printf("The uppercase letter is: %c\n", upper);


    return 0;
}
