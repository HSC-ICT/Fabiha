#include<iostream>
using namespace std;

main()
{
    char upper;

    //printf("Enter any uppercase letter: ");
    cout << "Enter any uppercase letter: ";

    //scanf("%c", &upper);
    cin >> upper;

    // a = 97
    // A = 65

    printf("The lowercase letter is: %c\n", upper + 32);


    return 0;
}
