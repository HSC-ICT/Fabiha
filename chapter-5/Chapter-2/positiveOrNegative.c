#include<stdio.h>
main(){
    // if-else-else-if statement

    // if(condition){
        // statement part
    // }else if(condition){
        // statement
    // }else{
        // statement
    // }

    int num;

    printf("Please enter a integer number : ");
    scanf("%d", &num);

    // worked
    //if(num > 0){
        //printf("Number is positive\n");
    //}else if(num < 0){
        //printf("Number is negative\n");
    //}else{
        //printf("Number is zero\n");
    //}

    // worked
    // if(num > 0){
         //printf("Number is positive\n");
    //}else if(num == 0){
        //printf("Number is zero\n");
    //}else{
        //printf("Number is negative\n");
    //}

    // worked
    if(num == 0){
        printf("Number is zero\n");
    }else if(num > 0){
        printf("Number is positive\n");
    }else{
        printf("Number is negative\n");
    }

    return 0;
}
