#include<stdio.h>

int main()
{
    // physics, chemistry, mathematics, biology
    int fariba[4] = {82, 72, 94, 88};
    int mithila[4] = {84, 92, 82, 90};

    int faribaResult = fariba[0] + fariba[1] + fariba[2] + fariba[3];
    int mithilaResult = mithila[0] + mithila[1] + mithila[2] + mithila[3];

    printf("Result of Fariba = %i\n", faribaResult);
    printf("Result of Mithila = %i\n", mithilaResult);

    // printf("%i\n", fariba[]);

    return 0;
}

// https://javatutoring.com/c-program-to-read-print-elements-of-array/