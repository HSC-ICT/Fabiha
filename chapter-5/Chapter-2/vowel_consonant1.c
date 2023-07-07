#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("%c is Vowel.\n", ch);
    }else{
        printf("%c is Consonant.\n", ch);
    }

    return 0;
}