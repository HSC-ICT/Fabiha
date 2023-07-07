#include<stdio.h>
int main()
{
    int i, n;

    printf("Please enter an integer number(limit): ");
    scanf("%d", &n);

    for(i = 2; i < n; i++){
        if((i < 10) && (i == 2 || i == 3 || i == 5 || i == 7))
        {
            printf(" %d ", i);
        }
        else if(!(i % 2 && i % 3 && i % 5 && i % 7))
        {
            continue;
        }
        else{
            printf(" %d ", i);
        }
    }
    printf("\n");

    return 0;
}

/*
n = 10

i = 2, i++

(i < 10) && (i == 2 || i == 3 || i == 5 || i == 7)

i = 2

true && true => true
---------------------------------------------------
i = 3

(i < 10) && (i == 2 || i == 3 || i == 5 || i == 7)

true && true => true
-------------------------------------------------------
i = 4

(i < 10) && (i == 2 || i == 3 || i == 5 || i == 7)

true && false => false

(!(i % 2 && i % 3 && i % 5 && i % 7))

==> !false ==> true

(!(4 % 2 = 0

------------------------------------------------------

2 
3
5
7
11
*/
