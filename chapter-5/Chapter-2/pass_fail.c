#include<stdio.h>
int main()
{
    int mark;

    printf("Enter your marks: ");
    scanf("%d", &mark);

    if (mark >= 33 && mark <= 100){
        printf("You Passed\n");
    }else if(mark >= 0 && mark <= 32){
        printf("You Failed\n");
    }else{
        printf("Invalid marks\n");
    }
    return 0;
}

// future class friday