#include <stdio.h>
int main()
{
	char ch;
	int lowercase_vowel , uppercase_vowel;
		
    printf("Enter any character: ");
	scanf("%c",&ch);
		
	lowercase_vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
		
	uppercase_vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
		
    // if(!isalpha(ch)){
    //     printf("Error! Non-Alphabetic character.\n");
    // }else if(lowercase_vowel || uppercase_vowel){
    //     printf("%c is Vowel.\n", ch);
    // }else{
    //     printf("%c is Consonant.\n", ch);
    // }
    
    if(lowercase_vowel || uppercase_vowel){
        printf("%c is Vowel.\n", ch);
    }else if(!isalpha(ch)){
        printf("Error! Non-Alphabetic character.\n");
    }else{
        printf("%c is Consonant.\n", ch);
    }
		
	return 0;
}