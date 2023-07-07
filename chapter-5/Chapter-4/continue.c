#include<stdio.h>
int main()
{
    int i, n;

    printf("Enter any number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(i == 4 || i == 5){
            continue;
        }else{
            printf("%d\n", i);
        }
    }

    return 0;
}
// 1
// i = 1 + 1 = 2
// 2
// i = 2 + 1 = 3
// 3
// i = 3 + 1 = 4

// continue thakle condition er number ta print korbe na and again increment or decrement part a cole jabe.

// i = 4 + 1 = 5

// continue thakle condition er number ta print korbe na and again increment or decrement part a cole jabe.

// i = 5 + 1 = 6