#include<stdio.h>
int main()
{
    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    if(mark > 100 || mark < 0){
        printf("Invalid Mark.\n");
    }else if(mark >= 80){
        printf("You got A+.\n");
    }else if(mark >= 70){
        printf("You got A.\n");
    }else if(mark >= 60){
        printf("You got A-.\n");
    }else if(mark >= 50){
        printf("You got B.\n");
    }else if(mark >= 40){
        printf("You got C.\n");
    }else if(mark >= 33){
        printf("You got D.\n");
    }else if(mark >= 80){
        printf("You got A+.\n");
    }else{
        printf("You failed in the examination.\n");
    }

    return 0;
}