#include<stdio.h>
int main()
{
    char ch;
    int lowercase_vowel, uppercase_vowel;

    printf("Enter an Alphabet: ");
    scanf("%c", &ch);

    // evaluates to 1 if variable ch is a lowercase vowel
    lowercase_vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');

    // evaluates to 1 if variable ch is a uppercase vowel
    uppercase_vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if(!isalpha(ch)){
        printf("Error! Non-Alphabetic character.\n");
    }else if(lowercase_vowel || uppercase_vowel){
        printf("%c is Vowel.\n", ch);
    }else{
        printf("%c is Consonant.\n", ch);
    }

   return 0;
}