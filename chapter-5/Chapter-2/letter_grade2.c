#include<stdio.h>
int main()
{
    int mark;

    printf("Mark must be 0 to 100");
    printf("\nEnter your mark: ");
    scanf("%d", &mark);

    if(mark < 0 || mark > 100){
        printf("Invalid Mark.\n");
    }else if(mark >= 80 && mark <= 100){
        printf("You got A+\n");
    }else if(mark >= 70 && mark <= 79){
        printf("You got A\n");
    }else if(mark >= 60 && mark <= 69){
        printf("You got A-\n");
    }else if(mark >= 50 && mark <= 59){
        printf("You got B\n");
    }else if(mark >= 40 && mark <= 49){
        printf("You got C\n");
    }else if(mark >= 33 && mark <= 39){
        printf("You got D\n");
    }else{
        printf("You Failed. Try again later\n");
    }

    return 0;
}