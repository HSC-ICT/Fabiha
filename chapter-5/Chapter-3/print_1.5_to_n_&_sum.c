// write a program that print 1.5 + 2.5 + 3.5 + 4.5 + .... + n

#include <stdio.h>
int main()
{
    float i, sum = 0, n;

    printf("Enter any number: ");
    scanf("%f", &n);

    for(i = 1.5; i <= n; i++){
        if(i == 1.5){
            printf("1.5");
        }else{
            printf(" + %.1f",i);
        }
        sum += i;
    }

    printf("\n\nSum of 1.5 to %.1f is = %.1f\n",n,sum);

    // return 0;
}

// i = 1.5;
// 1.5 <= 5.5
// i++;


// 1.5 == 1.5 ==> true;
// print ==> 1.5