#include<stdio.h>
int main()
{
    int digit;

    printf("Enter a digit(0 to 10): ");
    scanf("%d", &digit);

    if(digit == 0){
        printf("Zero\n");
    }else if(digit == 1){
        printf("One\n");
    }else if(digit == 2){
        printf("Two\n");
    }else if(digit == 3){
        printf("Three\n");
    }else if(digit == 4){
        printf("Four\n");
    }else if(digit == 5){
        printf("Five\n");
    }else if(digit == 6){
        printf("Six\n");
    }else if(digit == 7){
        printf("Seven\n");
    }else if(digit == 8){
        printf("Eight\n");
    }else if(digit == 9){
        printf("Nine\n");
    }else if(digit == 10){
        printf("Ten\n");
    }else{
        printf("The end\n");
    }

    return 0;
}