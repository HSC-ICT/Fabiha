#include<stdio.h>
int main()
{
    int mark;

    printf("Enter your mark:(0 - 100) ");
    scanf("%d", &mark);

    printf("Pass Mark is 40 :D\n");

    switch(mark / 10)
    {
        case 10:
        case 9: 
        case 8:
            printf("Grade: A+\n");
            break;
        case 7:
            printf("Grade: A\n");
            break;
        case 6:
            printf("Grade: A-\n");
            break;
        case 5:
            printf("Grade: B\n");
            break;
        case 4:
            printf("Grade: C\n");
            break;
        case 3:
            printf("Grade: F\n");
            break;
    }
    return 0;
}