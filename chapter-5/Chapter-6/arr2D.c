#include<stdio.h>

int main()
{
    int result[5][4] = {
        // physics, chemistry, mathematics, biology
        {82, 71, 91, 82},
        {81, 79, 99, 84},
        {84, 75, 95, 88},
        {85, 78, 92, 83},
        {89, 70, 90, 85}
    };


    int roll_1_in_physics = result[0][0];
    int roll_2_in_chemistry = result[1][1];
    int roll_3_in_biology = result[2][3];
    int roll_4_in_mathematics = result[3][2]

    printf("%i\n", roll_1_in_physics);
    printf("%i\n", roll_2_in_chemistry);
    printf("%i\n", roll_3_in_biology);
    printf("%i\n", roll_4_in_mathematics);

    printf("%i\n", result[1][]);


    return 0;
}