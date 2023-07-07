#include<stdio.h>
int main()
{
    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    if(mark <= 100 && mark >= 0){
        if(mark >= 80 && mark <= 100){
            printf("You got A+ Oi beta misty khawa\n");
        }else if(mark >= 70 && mark <= 79){
            printf("You got A ish ektur laiga aslo na :(\n");
        }else if(mark >= 60 && mark <= 69){
            printf("You got A-.\n");
        }else if(mark >= 50 && mark <= 59){
            printf("You got B.\n");
        }else if(mark >= 40 && mark <= 49){
            printf("You got C.\n");
        }else if(mark >= 33 && mark <= 39){
            printf("You got D. jah pass korsi. Ay tour a jai\n");
        }else if(mark >= 0 && mark <= 32){
            printf("You failed in the examination. Bye Bye\n");
        }
    }else{
        printf("Invalid Mark.\n");
    }

    return 0;
}